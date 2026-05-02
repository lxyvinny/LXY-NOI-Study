#include <bits/stdc++.h>
using namespace std;
int n, m, K, a[25][25];
int main() {
  cin >> n >> m >> K;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
    }
  }
  int ans = 100000;
  int S = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      for (int k = i; k <= n; k++) {
        for (int l = j; l <= m; l++) {
          int cnt = 0;
          for (int o = i; o <= k; o++) {
            for (int p = j; p <= l; p++) {
              S++;
              if (a[o][p] == 1) {
                cnt++;
              }
            }
          }
          if (cnt >= k) {
            if (S < ans) {
              ans = S;
            }
          }
        }
      }
    }
  }
  cout << ans;
  return 0;
}