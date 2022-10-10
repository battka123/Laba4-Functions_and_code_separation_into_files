#include "lab05.hpp"

void sort(std::vector<float>& numbers) {
  for (int i = 0; i < int(numbers.size()); i++) {
    for (int j = i; j < int(numbers.size()); j++) {
      if (numbers[i] > numbers[j]) std::swap(numbers[i], numbers[j]);
    }
  }
}