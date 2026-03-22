#include <bits/stdc++.h>
using namespace std;
int n, m, a[1001];
int main() {
  cin >> n >> m;
  for (int i = 1, x; i <= m; i++) {
    cin >> x;
    if (x == 1) {
      a[n] = !a[n], a[x] = !a[x], a[x + 1] = !a[x + 1];
    } else if (x == n) {
      a[x - 1] = !a[x - 1], a[x] = !a[x], a[1] = !a[1];
    } else {
      a[x - 1] = !a[x - 1], a[x] = !a[x], a[x + 1] = !a[x + 1];
    }
  }
  for (int i = 1; i <= n; i++) {
    cout << a[i] << ' ';
  }
  return 0;
}