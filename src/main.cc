#include <iostream>
#include <vector>

#include "src/example_lib/example_lib.h"

using std::cout;
using std::vector;

int main() {
  cout << "\nRunning bazel-cpp-template example after being compiled by Bazel. "
          "\n\n";

  std::vector<int> baz = foobar(3);

  for (unsigned int i = 0; i < baz.size(); i++) {
    cout << i << "\n";
  }

  return 0;
}