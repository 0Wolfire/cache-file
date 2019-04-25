all: proto-cpp proto-golang

SRC = ${GOPATH}/src

proto-golang:
	@protoc --gogofaster_out=$(SRC) ./proto/file_description.proto

proto-cpp:
	@protoc --proto_path=./proto --cpp_out=./proto/cpp ./proto/file_description.proto