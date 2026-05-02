#include <bits/stdc++.h>
using namespace std;
int t, n, a, f[5000];
int main() {
  for (cin >> t; t--;) {
    cin >> n >> a;
    f[0] = 1;
    int len = 1;
    // 计算阶乘。
    for (int i = 2; i <= n; i++) {
      int c = 0;
      for (int j = 0; j < len; j++) {
        int x = f[j] * i + c;
        f[j] = x % 10;
        c = x / 10;
      }
      // 把 c 的每一位切并复制到 f[len] 里面。
      for (; c > 0; c /= 10) {
        f[len] = c % 10;
        len++;
      }
    }
    // 判断 n! 中 a 出现的次数。
    int cnt = 0;
    for (int i = 0; i < len; i++) {
      cnt += f[i] == a;
    }
    cout << cnt << '\n';
  }
}