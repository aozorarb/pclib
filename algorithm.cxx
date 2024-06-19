#ifndef ALGORITHM_SRC
#define ALGORITHM_SRC 1

namespace pc {
  template <typename T> void chmax(T &a, T b) noexcept { if(b > a) a = b; }
  template <typename T> void chmin(T &a, T b) noexcept { if(b < a) a = b; }
}

#endif // ALGORITHM_SRC
