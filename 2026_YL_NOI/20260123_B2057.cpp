#include <bits/stdc++.h>
using namespace std;
int s, n;
float x;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> x;
    s += x;
  }
  cout << fixed << setprecision(5) << s << " " << 1.0 * s / n;
  return 0;
}

// int n, zdz = 0;
// int main() {
//   cin >> n;
//   if (n < 0) {
//     cout << "谁考这么低?";
//   } else if (n > 100) {
//     cout << "谁考这么高?";
//   } else {
//     for (int i = 1; i <= n; i++) {
//       int t;
//       cin >> t;
//       if (t > zdz) zdz = t;
//     }
//   }
//   cout << zdz << '\n';
//   return 0;
// }