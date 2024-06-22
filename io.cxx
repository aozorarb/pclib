#ifndef IO_SRC
#define IO_SRC 1

#include <iostream>
#include <cassert>
#include <vector>

namespace pc {

  template <typename T>
  void input_vec(vector<T> &vec, size_t n = 0) noexcept {
    assert(vec.size() >= n);
    if (n == -1) n = vec.size();
    for (size_t i=0; i<n; ++i) {
      std::cin >> vec[i];
    }
  }
  
  // give only vector, array, ..., not given int
  template <typename T>
  void pretty_output(const vector<T> &vec) noexcept {
    if (vec.size() == 0) return;
    size_t size = vec.size();
  
    std::cout << "{" << vec[0];
    for (size_t i=1; i<size; ++i) {
      std::cout << ", " << vec[i];
    }
    std::cout << "}\n";
  }
  
  
  template <typename T>
  void output_vec(const vector<T> &vec, const char chr = ' ') noexcept {
    size_t size = vec.size();
  
    for (size_t i=0; i<size; ++i) {
      std::cout << vec[i] << chr;
    }
    std::cout << std::endl;
  }

}

#endif // IO_CXX
