#include "src/example_lib/example_lib.h"

#include <vector>

#include "gtest/gtest.h"

TEST(ExampleLib, ExampleLibShouldFunction) {
  std::vector<int> actual = {0, 1, 2};
  std::vector<int> expected = foobar(3);
  EXPECT_EQ(expected, actual);
}