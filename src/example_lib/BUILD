cc_library(
    name = "example_lib",
    srcs = [
        "example_lib.cc"
    ],
    hdrs = [
        "example_lib.h"
    ],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "example_lib_test",
    srcs = [
        "example_lib_test.cc"
    ],
    deps = [
        ":example_lib",
        "@googletest//:gtest_main",
    ],
)