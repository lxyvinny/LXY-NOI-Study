#include <bits/stdc++.h>
using namespace std;
const int kMaxN = 1e3 + 5;
long long n, m, a[kMaxN][kMaxN], c[kMaxN][kMaxN], ans = LONG_LONG_MIN, x = 0, y = 0, len;
int main() {
  cin >> n >> m >> len;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
      c[i][j] = a[i][j] + c[i - 1][j] + c[i][j - 1] - c[i - 1][j - 1];
    }
  }
  for (int i = 1; i <= n; i++) {
    int k = i + len - 1;
    for (int j = 1; j <= m; j++) {
      int h = j + len - 1;
      if (k <= n && h <= m) {
        int sum = c[k][h] + c[i - 1][j - 1] - c[i - 1][h] - c[k][j - 1];
        if (sum > ans) {
          ans = sum;
          x = i;
          y = j;
        }
      }
    }
  }
  cout << x << ' ' << y;
  return 0;
}