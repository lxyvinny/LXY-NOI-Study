  #include <bits/stdc++.h>
  using namespace std;

  int n, m, a[15][15], s[15][15], ans;

  int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
      string t1;
      cin >> t1;
      for (int j = 1; j <= m; j++) {
        if (t1[j - 1] == '1'){
          a[i][j] = 1;
        } else {
          a[i][j] = -1;
        }
      }
    }
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + a[i][j];
      }
    }
    for (int x1 = 1; x1 <= n; x1++) {
      for (int x2 = x1; x2 <= n; x2++) {
        for (int y1 = 1; y1 <= m; y1++) {
          for (int y2 = y1; y2 <= m; y2++) {
            int sum = s[x2][y2] - s[x1 - 1][y2] - s[x2][y1 - 1] + s[x1 - 1][y1 - 1];
            if (sum == 0) {
              int t2 = (x2 - x1 + 1) * (y2 - y1 + 1);
              ans = max(ans, t2);
            }
          }
        }
      }
    }
    cout << ans;
    return 0;
  }