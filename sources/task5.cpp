//
// Created by Ivan on 10.10.2022.
//
#include <lab05.hpp>

bool remove_first_negative_element(std::vector<int>& vec,
                                   int& removed_element) {
  size_t k = 0;
  for (int i : vec) {
    k++;
    if (i < 0) {
      removed_element = i;
      for (; size_t(k - 1) < vec.size(); k++) {
        vec[k - 1] = vec[k];
      }
      vec.resize(int(vec.size()) - 1);
      return true;
    }
  }
  removed_element = 0;
  return false;
}