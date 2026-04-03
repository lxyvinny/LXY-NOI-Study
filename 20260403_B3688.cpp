#include <bits/stdc++.h>
using namespace std;
const int kL = 2e3 + 1;
int n, p[kL];
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> p[i];
  }
  for (;;) {
    rotate(p + 1, p + n, p + n + 1); // rotate 函数的用法是 rotate(“起点”, “中间”, “最后”);
    for (int i = 1; i <= n; i++) {
      cout << p[i] << ' ';
    }
    cout << '\n';
    if (p[n] == n) {
      break;
    }
  }
  return 0;
}