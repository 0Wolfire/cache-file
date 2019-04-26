package main

import (
	"flag"
	"fmt"
	"io/ioutil"
	"os"
	"strings"

	"github.com/gladiusio/cache-file/go/filecache"
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
	files := &listFlags{}
	flag.Var(files, "file", "The files to inspect")
	flag.Parse()

	for _, fileName := range *files {
		// Read the asset provided
		asset, err := os.Open(fileName)
		if err != nil {
			panic(err)
		}
		defer asset.Close()
		cached, err := filecache.NewCachedFile(asset, false)
		if err != nil {
			panic(err)
		}

		content, err := ioutil.ReadAll(cached.GetReadCloser())
		if err != nil {
			panic(err)
		}

		fmt.Printf("Headers: %s\n", strings.Join(cached.GetHeaders(), ","))
		fmt.Printf("Content SHA256: %s\n", cached.GetSHA256())
		fmt.Printf("Content: %s\n", string(content))
	}
}
