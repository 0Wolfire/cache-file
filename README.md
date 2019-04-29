# Cache File
File container for gladius assets and the libraries to work with them

# File Format
| Byte position          | Description                                  |
|:-----------------------|:---------------------------------------------|
| 0 - 4                  | Length of Header (Unsigned Int32 Big Endian) |
| 4 - Length of Header   | Protobuf Header                              |
| Length of Header - End | File Content                                 |

The reason for this setup is protobufs can't be streamed so we use a descriptor to get some basic information about how we should
serve the file, and then we can either cache the rest of the asset in RAM or read it straight from disk.

# Testing files

## Create a file
Run `go run cmd/create/format_file.go -header="Your Header: here" -file=./your_file.txt` to generate a file with 
headers encoded and saved with the file name being the file hash

## Inspect a file

Run ` go run cmd/inspect/inspect_file.go -file=./output/HASH1 -file=./output/HASH2` to see information about the file