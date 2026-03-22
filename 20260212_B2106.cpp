#include <bits/stdc++.h>
using namespace std;
int n, m, a[101][101], t1, t2;
int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[j][i] << ' ';
    }
    cout << '\n';
  }
  return 0;
}
// cin >> n >> m;
// for (int i = 0; i < n; i++) {
//   for (int j = 0; j < m; j++) {
//     cin >> a[i][j];
//   }
// }
// for (int i = 0; i < n; i++) {
//   for (int j = 0; j < m; j++) {
//     b[j][i] = a[i][j];
//   }
// }
// for (int i = 0; i < m; i++) {
//   for (int j = 0; j < n; j++) {
//     cout << b[i][j] << ' ';
//   }
//   cout << '\n';
// }
//   return 0;
// }  