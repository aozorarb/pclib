# io.cxx
input/output

### input_vec(vector<T> &vec, size_t n = 0)
vectorの配列に入力を代入する。
nが入力されなかった場合はかわりにvec.size()を用いる。
vec.size()より大きいnを指定するとassert。
`for (int i=0; i<N; ++i) std::cin >> As[i];` と `input_vec(As, N)`は等価。

### pretty_output(const vector<T> &vec)
vecの中身を `{1, 2, 3}` のように分かりやすく出力する。rubyのppを参考にした。
ただ、vector以外と多次元配列を出力できない。文字列も"で囲まれない。
複雑なデバッグにはデバッガーを使うべき。

### output_vec(const vector<T> &vec, const char chr = ' ')
vecの中身をchr区切りで出力する。スペース区切りで出力するのに使える。
