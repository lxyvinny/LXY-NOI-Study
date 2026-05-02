#include <bits/stdc++.h>
using namespace std;

// int m, n, s;
// int main() {
//   cin >> m >> n;
//   for (int i = m; i <= n; i++) {
//     if (i % 2 == 1) {
//       s += i;
//     }
//   }
// cout << s;
//  return 0;
//}
int m, n, s;
int main() {
  cin >> m >> n;
  // for (int i = m % 2 ? m : m+1; i <= n; i+=2) {
  // for (int i = m + 1 - m % 2; i <= n; i += 2) {
  for (int i = m + !(m % 2); i <= n; i += 2) {
    s += i;
    // s += !(1 - i % 2) * i;
    //  s += (1 % 2 == 1) * i;
    //  s += i % 2 * i;
  }
  cout << s;
  return 0;
}