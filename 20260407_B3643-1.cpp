#include <bits/stdc++.h>
using namespace std;
const int kL = 1e3 + 1;
int n, m, d[2], jz[kL][kL];
int n, m, u, v, jz[kL][kL];
int main() {
  cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    cin >> d[0] >> d[1];
    jz[d[0]][d[1]] = 1, jz[d[1]][d[0]] = 1;
    cin >> u >> v;
    jz[u][v] = 1, jz[v][u] = 1;
  }
  // 输出邻接矩阵
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cout << jz[i][j] << ' ';
    for (int j = 1; j <= n; j++) {
      cout << jz[i][j] << (j == n ? "" : " ");
    }
    cout << '\n';
  }
  int cnt[m] = {};
  // 输出邻接表
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cnt[i] += jz[i][j] == 1 && jz[i - 1][j] || jz[i][j] == 1 && jz[i][j - 1] == 1 || jz[i][j] == 1 && jz[i + 1][j] == 1;
    int degree = 0;
    for (int j = 1; j <= n; j++) {
      if (jz[i][j]) degree++;
    }
  }
  for (int i = 1; i <= n; i++) {
    if (cnt[i] != 0) {
      cout << cnt[i] << ' ';
    cout << degree;
    for (int j = 1; j <= n; j++) {
      if (jz[i][j]) cout << " " << j;
    }
    for (int j = 1; j <= cnt[i]; j++) {
      cout << j << ' ';
    }
    cout << '\n';
  }
  return 0;
}

/*

*/