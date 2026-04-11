#include <bits/stdc++.h>
using namespace std;
int n, m, jz, cnt[2];
int main() {
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> jz, cnt[0] += (i == m) * jz, cnt[1] += (j == m) * jz;
    }
  }
  cout << cnt[0] << ' ' << cnt[1] << ' ' << cnt[0] + cnt[1];
  return 0;
}