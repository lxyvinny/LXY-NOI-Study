#include <bits/stdc++.h>
using namespace std;
const int kL = 1e3 + 1;
int n, m, jz[kL][kL];
vector<int> xl[kL];
int main() {
  cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    int u, v;
    cin >> u >> v, jz[u][v] = jz[v][u] = 1, xl[u].push_back(v), xl[v].push_back(u);
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << jz[i][j] << ' ';
    }
    cout << '\n';
  }
  for (int i = 1; i <= n; i++) {
    sort(xl[i].begin(), xl[i].end());
    cout << xl[i].size() << ' ';
    for (int j = 0; j < xl[i].size(); j++) {
      cout << xl[i][j] << ' ';
    }
    cout << '\n';
  }
  return 0;
}