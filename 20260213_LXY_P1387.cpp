#include <bits/stdc++.h>
using namespace std;
int n, m, dp[101][101] = {0}, ans = 0;  // dp[i][j]表示以(i,j)为右下角的最大正方形边长
int main() {
  cin >> n >> m;
  int a[101][101];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] == 1) {
        if (i == 0 || j == 0) {
          dp[i][j] = 1;  // 第一行或第一列，边长只能是1
        } else {
          dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
        }
        ans = max(ans, dp[i][j]);
      } else {
        dp[i][j] = 0;  // 遇到0无法构成正方形
      }
    }
  }
  cout << ans;
  return 0;
}