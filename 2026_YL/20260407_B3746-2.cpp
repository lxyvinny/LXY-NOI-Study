#include <bits/stdc++.h>
using namespace std;
const int kL = 5e3 + 1;
long long n, m, t[kL], sj[kL], rw[kL], cnt[kL], ans[kL][kL];
int main() {
  cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    cin >> t[i];
  }
  for (int i = 1; i <= m; i++) {
    int pos = 1;
    for (int j = 2; j <= n; j++) {
      if (sj[j] < sj[pos]) {
        pos = j;
      }
    }
    sj[pos] += t[i];
    ans[pos][++cnt[pos]] = i;
  }
  for (int i = 1; i <= n; i++) {
    if (!ans[i][1]) {
      cout << 0;
    } else {
      for (int j = 1; ans[i][j]; j++) {
        cout << ans[i][j] << ' ';
      }
    }
    cout << '\n';
  }
  return 0;
}