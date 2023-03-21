#ifndef IO_HPP
#define IO_HPP 1

#include <iostream>
#include <vector>

namespace procon {
  template <class T>

  void puts(const std::vector<T> &vec) {
    size_t size = vec.size();
    if(size == 0) return;
    for(int i=0;i<size;++i) {
      std::cout << vec[i] << " \n"[(i == size-1)];
    }
  }
}

#endif // IO_HPP
