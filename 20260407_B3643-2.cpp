#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  
  int jz[1005][1005] = {};
  vector<int> adj[1005];
  
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    jz[u][v] = 1;
    jz[v][u] = 1;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  
  // 输出邻接矩阵
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (j > 1) cout << ' ';
      cout << jz[i][j];
    }
    cout << '\n';
  }
  
  // 输出邻接表
  for (int i = 1; i <= n; i++) {
    sort(adj[i].begin(), adj[i].end());
    cout << adj[i].size();
    for (int v : adj[i]) {
      cout << ' ' << v;
    }
    cout << '\n';
  }
  
  return 0;
}