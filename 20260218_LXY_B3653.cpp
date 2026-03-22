#include <bits/stdc++.h>
using namespace std;
int n, m;
long long b[55][55], ans[55][55];
int main() {
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> b[i][j];
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      long long best = 0;
      for (int x = 1; x <= n; x++) {
        for (int y = 1; y <= m; y++) {
          if (b[x][y] == b[i][j]) {
            long long dx = i - x, dy = j - y, dist = dx * dx + dy * dy;
            if (dist > best) {
              best = dist;
            }
          }
        }
      }
      ans[i][j] = best;
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cout << ans[i][j] << " ";
    }
    cout << '\n';
  }
  return 0;
}
