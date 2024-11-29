cmake_minimum_required(VERSION 3.20)
project(server)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
find_package(Protobuf CONFIG REQUIRED)
find_package(gRPC CONFIG REQUIRED)

add_library(protolib proto/hello.proto)
target_link_libraries(protolib gRPC::grpc++)

target_include_directories(protolib PUBLIC ${CMAKE_CURRENT_BINARY_DIR})
protobuf_generate(TARGET protolib LANGUAGE cpp)
protobuf_generate(TARGET protolib  LANGUAGE grpc
GENERATE_EXTENSIONS .grpc.pb.h .grpc.pb.cc
PLUGIN "protoc-gen-grpc=/home/saksham/grpc_install_dir/bin/grpc_cpp_plugin")

add_executable(server src/server.cc)
add_executable(client src/client.cc)
target_link_libraries(server protolib)
target_link_libraries(client protolib)