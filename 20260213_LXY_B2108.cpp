#include <bits/stdc++.h>
using namespace std;
const int kMaxN = 105;
int n, m, a[kMaxN][kMaxN], b[kMaxN][kMaxN];
int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
      b[i][j] = a[i][j];
    }
  }
  for (int i = 1; i <= n - 2; i++) {
    for (int j = 1; j <= m - 2; j++) {
      b[i][j] = round((a[i][j] + a[i - 1][j] + a[i + 1][j] + a[i][j - 1] + a[i][j + 1]) / 5.0);
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << b[i][j];
      if (j < m - 1) {
        cout << ' ';
      }
    }
    cout << '\n';
  }
  return 0;
}