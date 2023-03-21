#ifndef ALGORITHM_HPP
#define ALGORITHM_HPP 1

namespace procon {
  template<class T>;

  void chmax(T &a, T &b) {
    if(a < b) a = b;
  }

  void chmin(T &a, T &b) {
    if(a > b) a = b;
  }
}

#endif // ALGORITHM_HPP
