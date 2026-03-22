#include <bits/stdc++.h>
using namespace std;
int n;
// 判断 m 是否为完全数，返回布尔值。
bool C(int m) {
  int s = 0;
  for (int i = 1; i < m; i++) {
    s += (m % i == 0) * i;
    // if (m % i == 0) {
    //   s += i;
    // }
  }
  return s == m;
}
// 找出 2 到 n 之间的所有完全数。
int main() {
  cin >> n;
  for (int i = 2; i <= n; i++) {
    if (C(i)) {
      cout << i << '\n';
    }
  }
  return 0;
}