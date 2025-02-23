# Introduction to CMake

This repository holds a simple C++ project which build a few libraries and tests them using a test runner. Your task is to write CMake build scripts
for building this project.

## Task

Use the following steps to ensure you've properly configured your project. First prepare the build directory and execute all commands below from it:

```bash
mkdir build
cd build
```

1. Configure the project

```bash
cmake ../
```

2. Build the project

```bash
cmake --build .
```

3. Run the tests

```bash
ctest . --verbose
```
