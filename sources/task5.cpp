#include "lab05.hpp"

bool remove_first_negative_element(std::vector<int>& vec,
                                   int& removed_element) {
  int k = 0;
  for (int i : vec) {
    k++;
    if (i < 0) {
      removed_element = i;
      for (; k - 1 < int(vec.size()); k++) {
        vec[k - 1] = vec[k];
      }
      vec.resize(int(vec.size()) - 1);
      return true;
    }
  }
  removed_element = 0;
  return false;
}