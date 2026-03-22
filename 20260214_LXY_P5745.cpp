#include <bits/stdc++.h>
using namespace std;
int n, m, dp[2], a[8101919], s = 1, ms, me, maxn, k;
int main() {
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    while (dp[k] + a[i] > m)
    {
      dp[k] -= a[s];
      s++;
    }
    dp[!k] = dp[k] + a[i];
    k = !k;
    if (dp[k] > maxn) {
      maxn = dp[k];
      ms = s;
      me = i;
    }
  }
  cout << ms << me << maxn;
  return 0;
}