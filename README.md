# bazel-cpp-template

## What is this?

This project is a simple starter template for a C++ project that uses the [Bazel build system](https://www.bazel.build/).

## Installation

First, ensure that you have [installed Bazel](https://docs.bazel.build/versions/3.2.0/install.html).

```
git clone https://github.com/ryanmcdermott/bazel-cpp-template
```

## Running

### Main

```
bazel run src:main
```

### Tests

```
bazel test src/example_lib:example_lib_test
```