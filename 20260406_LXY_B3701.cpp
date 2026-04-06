#include <bits/stdc++.h>
using namespace std;
const int kL = 1e6 + 1;
long long n, m, df[kL], b[kL], ans;
int main() {
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    cin >> df[i];
    for (long long j = max(1LL, df[i] - 2); j <= min(n, df[i] + 2); j++) { // 这里的范围是从 max(1LL, df[i] - 2) 到 min(n, df[i] + 2)，因为有时候 j 会小于 1 或者大于 n。
      if (!b[j]) {
        ans++;
        b[j] = 1;
      }
    }
  }
  cout << ans;
  return 0;
}