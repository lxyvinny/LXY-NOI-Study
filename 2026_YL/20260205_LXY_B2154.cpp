#include <bits/stdc++.h>
using namespace std;
int n, a, cnt;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) { // 枚举从 1 到 n 所有的数
    for (int t = i; t > 0; t /= 10) { // 把 t 的个位去掉，直到 t 等于 0
      a = t % 10; // 把 t 里面的数字逐个拆出来，并保存给 a。
      cnt += a == 1; // 判断 a 有没有1，如果 a 里面有 1，cnt 就加一。
    }
  }
  cout << cnt;
  return 0;
}