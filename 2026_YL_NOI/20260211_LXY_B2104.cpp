#include <bits/stdc++.h>
using namespace std;
int n, m, a[107][107], x;
int main() {
  cin >> n >> m;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      cin >> a[i][j];
    }
  }
  for (int i = 1; i <= n; ++i)
    for (int j = 1; j <= m; ++j) {
      cin >> x;
      a[i][j] += x;
    }
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      cout << a[i][j] << ' ';
    }
    cout << '\n';
  }
  return 0;
}