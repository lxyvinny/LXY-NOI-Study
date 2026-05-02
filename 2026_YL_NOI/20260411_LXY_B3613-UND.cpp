#include <bits/stdc++.h>
using namespace std;
const int kL = 5e5 + 1;
int t;
vector<int> ans[kL];
int main() {
  for (cin >> t; t--;) {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
      ans[i].clear();
    }
    for (int i = 1; i <= m; i++) {
      int u, v;
      cin >> u >> v;
      ans[u].push_back(v);
    }
    for (int i = 1; i <= n; i++) {
      sort(ans[i].begin(), ans[i].end());
      for (int j = 0; j < ans[i].size(); j++) {
        cout << ans[i][j] << ' ';
      }
      cout << '\n';
    }
  }
  return 0;
}