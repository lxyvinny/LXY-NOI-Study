#include <bits/stdc++.h>
using namespace std;
const int kMaxN = 1e3 + 1;
int a[kMaxN][kMaxN][2], m, n, t[kMaxN][2], x, y;
void Cout(int i, int j) {
  cout << i << ' ' << j << '\n';
  if (!a[i][j][0] && !a[i][j][1]) {
    return;
  }

  Cout(a[i][j][0], a[i][j][1]);
}
int main() {
  cin >> m >> n >> x >> y;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      for (int k = 0; k <= 1; k++) {
        cin >> a[i][j][k];
      }
    }
  }
  Cout(x, y);
  return 0;
}