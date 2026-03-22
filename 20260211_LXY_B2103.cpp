#include <bits/stdc++.h>
using namespace std;
int m, n, x[101][101], y[101][101], c;
int main() {
  cin >> m >> n;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> x[i][j];
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> y[i][j];
      c += x[i][j] == y[i][j]; // 以下 if 的三目版本。
      // if (x[i][j] == y[i][j]) {
      //   c++;
      // }
    }
  }
  cout << fixed << setprecision(2) << (1.0 * c / (m * n)) * 100;
  return 0;
}