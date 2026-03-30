#include <bits/stdc++.h>
using namespace std;
int n, m, a[1000][1000], cnt, scs, t[4], zb[];
int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  cin >> scs;
  for (int i = 1; i <= scs; i++) {
    for (int j = 0; j <= 4; j++) {
      cin >> t[j];
    }
    swap(a[t[0]][t[1]], a[t[2]][t[3]]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cnt += a[i][j] >= m && a[i][j] >= n;
    }
  }
  return 0;
}