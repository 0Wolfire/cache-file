all: proto-cpp proto-golang

proto-golang:
	@protoc --gogofaster_out=. ./proto/file_description.proto

proto-cpp:
	@protoc --proto_path=./proto --cpp_out=./proto/cpp ./proto/file_description.proto