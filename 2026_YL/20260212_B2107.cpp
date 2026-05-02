#include <bits/stdc++.h>
using namespace std;
int n, m, a[101][101];
int main() {
  cin >> n >> m;
  for (int i = 0, x, i2 = 1; i < n; i++) {
    for (int j = 0, j2 = 1; j < m; j++, j2++) {
      i2 = j;
      j2 = n - i - 1;
      cin >> x;
      a[i2][j2] = x;
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j] << ' ';
    }
    cout << '\n';
  }
  return 0;
}