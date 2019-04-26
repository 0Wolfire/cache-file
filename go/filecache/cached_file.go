package filecache

import (
	"bytes"
	"encoding/binary"
	"fmt"
	"io"
	"io/ioutil"
	"os"

	"github.com/gladiusio/cache-file/proto/go/description"
	"github.com/gogo/protobuf/proto"
)

// CachedFile processes file descriptions and creates readers for either cached content or the underlying file
type CachedFile struct {
	readCloser io.ReadCloser
	desc       *description.Description
	contents   []byte
}

// NewCachedFile returns a CachedFile around the specified asset, and caches the file in
// RAM if cacheFile is set to true. CachedFile does not close the underlying asset unless
// Close() is called. If NewCachedFile returns an error, you should close the asset.
func NewCachedFile(asset *os.File, cacheFile bool) (*CachedFile, error) {
	// Read the message size header
	buffer := make([]byte, 4)
	numBytesRead := 0
	for numBytesRead < 4 {
		n, err := asset.Read(buffer)
		if err != nil {
			return nil, fmt.Errorf("cached file: error reading preamble bytes for file descriptor: %s", err.Error())
		}

		numBytesRead += n
	}

	// Convert the preamble bytes into an int
	protoSize := binary.BigEndian.Uint32(buffer)

	// Read our descriptor protobuf
	buffer = make([]byte, protoSize)
	numBytesRead = 0
	for numBytesRead < int(protoSize) {
		n, err := asset.Read(buffer[numBytesRead:]) // Make sure we don't write over anything
		if err != nil {
			return nil, fmt.Errorf("cached file: error reading description into buffer: %s", err.Error())
		}
		numBytesRead += n
	}

	// Unmarshal the descriptor we just read
	desc := &description.Description{}
	err := proto.Unmarshal(buffer, desc)
	if err != nil {
		return nil, fmt.Errorf("cached file: error unmarshalling file description for file %s: %s", asset.Name(), err.Error())
	}

	// If we're not caching the file we just store the reader around the underlying asset which should now be at our content position
	if !cacheFile {
		return &CachedFile{readCloser: asset, desc: desc}, nil
	}

	// If we are caching we load the rest of the bytes of the asset
	content, err := ioutil.ReadAll(asset)
	if err != nil {
		return nil, fmt.Errorf("cached file: error reading asset %s: %s", asset.Name(), err.Error())
	}

	return &CachedFile{contents: content, desc: desc}, nil
}

// GetReadCloser will return the underlying file reader if caching is not enabled,
// or a new ioutil.NopCloser over the underlying byte array if caching is enabled.
func (cf *CachedFile) GetReadCloser() io.ReadCloser {
	if cf.readCloser != nil {
		return cf.readCloser
	}
	return ioutil.NopCloser(bytes.NewReader(cf.contents))
}

// GetHeaders returns the list of header strings for the response object
func (cf *CachedFile) GetHeaders() []string {
	return cf.desc.GetHeaders()
}

// GetSHA256 returns the SHA256 hash of the underlying content
func (cf *CachedFile) GetSHA256() string {
	return cf.desc.GetContentHash()
}
