package main

import (
	"crypto/sha256"
	"encoding/binary"
	"fmt"
	"io/ioutil"
	"path/filepath"

	"github.com/gladiusio/cache-file/proto/go/description"

	"flag"
	"log"
	"os"
	"strings"
)

type listFlags []string

func (i *listFlags) String() string {
	return strings.Join(*i, ",")
}

func (i *listFlags) Set(value string) error {
	*i = append(*i, value)
	return nil
}

func main() {
	headers := &listFlags{}
	files := &listFlags{}
	flag.Var(headers, "header", "The headers string (comma seperated) to be applied to the files in order. If only one header is provided it will be added to all files")
	flag.Var(files, "file", "The files to process")
	outputDir := flag.String("output_dir", "./output", "Set's the output directory for files")

	flag.Parse()

	if len(*headers) != 1 || len(*headers) != len(*files) {
		log.Fatal("Error: use only one header or enough to cover all input files")
	}

	for i, fileName := range *files {
		// Create the headers to apply
		var toApply []string
		if len(*headers) == 1 {
			toApply = strings.Split((*headers)[0], ",")
		} else {
			toApply = strings.Split((*headers)[i], ",")
		}

		// Read the asset provided
		file, err := os.Open(fileName)
		if err != nil {
			panic(err)
		}
		defer file.Close()

		content, err := ioutil.ReadAll(file)
		if err != nil {
			panic(err)
		}

		desc := &description.Description{Headers: toApply}
		descBytes, err := desc.Marshal()
		if err != nil {
			panic(err)
		}

		protoLength := make([]byte, 4)
		binary.BigEndian.PutUint32(protoLength, uint32(len(descBytes)))

		output := append(protoLength, descBytes...)
		output = append(output, content...)

		// Get the hash of output and write it to disk
		h := sha256.New()
		h.Write(output)
		actualHash := fmt.Sprintf("%X", h.Sum(nil))

		destination, err := os.Create(filepath.Join(*outputDir, actualHash))
		if err != nil {
			panic(err)
		}
		_, err = destination.Write(output)
		if err != nil {
			panic(err)
		}
	}
}
