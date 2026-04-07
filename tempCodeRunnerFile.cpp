#include <bits/stdc++.h>
using namespace std;
const int kL = 5e3 + 1;
long long n, m, t[kL], sj[kL];
vector<long long> ans[kL];
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
    ans[pos].push_back(i);
  }
  for (int i = 1; i <= n; i++) {
    if (!ans[i][1]) {
      cout << 0;
    } else {
      for (int j = 1; j <= ans[i].size(); j++) {
        cout << ans[i][j] << ' ';
      }
    }
    cout << '\n';
  }
  return 0;
}
// 事情没有变化，只是工具