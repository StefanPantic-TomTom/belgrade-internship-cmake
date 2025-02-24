# Introduction to CMake

This repository holds a simple C++ project which build a few libraries and tests them using a test runner.

## Manual build

Below are the `clang++` commands to build both lib_a and lib_b as static libraries. The directory structure is as follows:

```
project/
├── lib_a/
│   ├── include/
│   │   └── ... (header files)
│   └── src/
│       └── ... (source files)
├── lib_b/
│   ├── include/
│   │   └── ... (header files)
│   └── src/
│       └── ... (source files)
```

Build `lib_a`:

```bash
clang++ -c -I lib_a/include lib_a/src/library.cpp -o lib_a.o
ar rcs lib_a.a lib_a.o
```

Build `lib_b`:

```bash
clang++ -c -I lib_a/include -I lib_b/include lib_b/src/library.cpp -o lib_b.o
ar rcs lib_b.a lib_b.o
```

## Task

Your task is to write CMake scripts for building `lib_a` and `lib_b` as STATIC libraries, building them and their unit tests, and
enabling test execution using CTest.

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
