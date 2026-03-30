#include <bits/stdc++.h>
using namespace std;
int n, m, a[1002][1002], cnt, scs, t[4];
int main() {
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
    }
  }
  cin >> scs;
  for (int i = 1; i <= scs; i++) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    swap(a[x1][y1], a[x2][y2]);
  }
  for (int j = 1; j <= m; j++) {
    for (int i = 1; i <= n; i++) {
      cnt += a[i][j] > a[i][j - 1] && a[i][j] > a[i - 1][j] && a[i][j] > a[i][j + 1] && a[i][j] > a[i + 1][j];
      // if (a[i][j] > a[i][j - 1] && a[i][j] > a[i - 1][j] && a[i][j] > a[i][j + 1] && a[i][j] > a[i + 1][j]) {
      //   cnt++;
      // }
    }
  }
  // 这里不会输出的原因是下标错误。
  cout << cnt << '\n';
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (a[i][j] > a[i][j - 1] && a[i][j] > a[i - 1][j] && a[i][j] > a[i][j + 1] && a[i][j] > a[i + 1][j]) {
        cout << i << ' ' << j << '\n';
      }
    }
  }
  return 0;
}