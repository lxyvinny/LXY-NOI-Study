#include <bits/stdc++.h>
using namespace std;
const int kL = 1e3 + 1;
int n, m, jz[kL][kL], u, v;
vector<int> d[kL];
int main() {
  cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    cin >> u >> v;
    jz[u][v] = 1;
    jz[v][u] = 1;
    d[u].push_back(v);
    d[v].push_back(u);
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << jz[i][j] << ' ';
    }
    cout << '\n';
  }
  for (int i = 1; i <= n; i++) {
    sort(d[i].begin(), d[i].end());
    cout << d[i].size() << ' ';
    for (int j = 0; j < d[i].size(); j++) {
      cout << d[i][j] << ' ';
    }
    cout << '\n';
  }
  return 0;
}