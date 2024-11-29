# gRPC-References
This repository contains example code for using gRPC with Protobuf. The references have been taken from the official gRPC documentation, gRPC Official repository, YouTube tutorials and code written by myself as well. The purpose of this repository is to make the use of gRPC easier and reduce future research time.

You can see each of the reference in [References.txt](References.txt).

>**Note**: It is assumed that you have built gRPC from source and installed it _locally_ and __NOT globally__. You can follow the installation instructions for your preferred language in case you are using any other language. As of now, this repository is using gRPC in C++.

If you are on Windows like me, using WSL2 would make your life far easier.

## Autocompletion in VS-Code
You can edit your <i>c_cpp_properties.json</i> as:
```json
{
    "configurations": [
        {
            "name": "Linux",
            "includePath": [
                "${workspaceFolder}/**",
                "/home/saksham/grpc_install_dir/include"       // Your gRPC install directory
            ],
            "defines": [],
            "compilerPath": "/usr/bin/c++",                    // Make sure this is same as used by cmake
            "cStandard": "c17",
            "cppStandard": "gnu++17",
            "intelliSenseMode": "linux-gcc-x64",
            "compileCommands": "build/compile_commands.json"  // set(CMAKE_EXPORT_COMPILE_COMMANDS ON) in CMakeLists.txt
        }
    ],
    "version": 4
}
```