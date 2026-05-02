#include <bits/stdc++.h>
using namespace std;
int m, n, a, sum;  // n 是行数，m 是列数。
int main() {
  cin >> m >> n;
  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> a;
      if (i == 1 || i == m) {
        sum += a;
      } else if (j == 1 || j == n) {
        sum += a;
      }
    }
  }
  cout << sum;
  return 0;
}