#include <grpcpp/grpcpp.h>
#include "proto/hello.grpc.pb.h"
#include "proto/hello.pb.h"

#include <memory>

class ProcessingClient {
public:
  ProcessingClient(std::shared_ptr<grpc::Channel> channel) : stub_(ProcessingServices::NewStub(channel)) {}

  float computeSum(float &x, float &y, float &z) {
    // Prepare the request
    Point3 request;
    request.set_x(x);
    request.set_y(y);
    request.set_z(z);

    // Container for reply
    Numeric reply;

    grpc::ClientContext context;

    // Making the actual RPC call
    grpc::Status status = stub_->computeSum(&context, request, &reply);

    // Act based on the response
    if (status.ok()) {
      return reply.value();
    } else {
      std::cout << status.error_code() << " : " << status.error_message() << std::endl;
      std::cout << "RPC Call failed." << std::endl;
      return -69.96;
    }
  }

private:
  std::unique_ptr<ProcessingServices::Stub> stub_;
};

int main() {
  ProcessingClient client(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));
  float x = 3.0f, y = 7.3f, z = 1.0f;
  float result = client.computeSum(x, y, z);

  std::cout << "Result: " << result << std::endl;

  return 0;
}