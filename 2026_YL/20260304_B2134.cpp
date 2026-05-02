#include <bits/stdc++.h>
using namespace std;
int s, max_ans;
// 枚举所有小于等于 m 的质数。
bool Z(int m) {
  for (int i = 2; i * i <= m; i++) {
    if (m % i == 0) {
      return 0;
    }
  }
  return 1;
}
int main() {
  cin >> s;
  for (int i = 2; i <= s / 2; i++) { // 枚举从 2 到 s / 2 的所有的数。
    if (Z(i)) { // Z(i) 如果是质数
      int j = s - i; // j 赋值为 s - i。
      if (Z(j)) { // 如果 Z(j) 也是质数
        max_ans = max(max_ans, i * j); // 更新两个质数的最大乘积。
      }
    }
  }
  cout << max_ans;
  return 0;
}