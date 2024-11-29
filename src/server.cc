#include <grpcpp/grpcpp.h>
#include "proto/hello.grpc.pb.h"
#include "proto/hello.pb.h"
#include <iostream>
#include <memory>

class ProcessingImpl : public ProcessingServices::Service {
  virtual ::grpc::Status computeSum(::grpc::ServerContext* context, const ::Point3* request, ::Numeric* response) {
    std::cout << "computeSum called" << std::endl;
    response->set_value(request->x() + request->y() + request->z());
    return grpc::Status::OK;
  }
};

int main() {
  ProcessingImpl service;
  grpc::ServerBuilder builder;

  std::cout << "Server running on localhost:50051" << std::endl;

  builder.AddListeningPort("localhost:50051", grpc::InsecureServerCredentials());
  builder.RegisterService(&service);

  std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
  server->Wait();

  return 0;
}