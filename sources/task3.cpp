#include "lab05.hpp"

int argmax(const std::vector<float>& numbers) {
  float k = -1, max = -3, num;
  for (auto i : numbers) {
    k++;
    if (i > max) {
      max = i;
      num = k;
    }
  }
  if (int(numbers.size()) == 0) return int(k);
  return int(num);
}