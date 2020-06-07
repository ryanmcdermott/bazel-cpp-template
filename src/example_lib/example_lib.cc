#include <vector>

using std::vector;

vector<int> foobar(unsigned int n) {
  vector<int> result;

  for (unsigned int i = 0; i < n; i++) {
    result.push_back(i);
  }

  return result;
}