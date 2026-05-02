#include <bits/stdc++.h>
using namespace std;
int n, m, jz, cnt[3];
int main() {
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> jz;
      cnt[0] += (i == m) * jz;
      cnt[1] += (j == m) * jz;
    }
  }
  cnt[2] += cnt[0] + cnt[1];
  for (int i = 0; i < 3; i++) {
    cout << cnt[i] << ' ';
  }
  return 0;
}