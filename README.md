# Cache File
File container for gladius assets and the libraries to work with them

# File Format
First four bytes are big Endian uint32 specifying the length of the descriptor protobuf, then the protobuf, then the file content.

# Testing files

## Create a file
Run `go run cmd/create/format_file.go -header="Your Header: here" -file=./your_file.txt` to generate a file with 
headers encoded and saved with the file name being the file hash

## Inspect a file

Run ` go run cmd/inspect/inspect_file.go -file=./output/HASH1 -file=./output/HASH2` to see information about the file