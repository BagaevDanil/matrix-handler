mkdir generate-proto
lib\protobuf\protoc.exe -I .\proto --cpp_out .\generate-proto *.proto