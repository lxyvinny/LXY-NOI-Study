#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 5;
int n, k, a[maxn], ans;
signed main() {
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  sort(a + 1, a + 1 + n);
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    ans += upper_bound(a + 1, a + 1 + n, a[i] + k) - a - i - 1;
  }
  cout << ans;
}