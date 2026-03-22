#include <bits/stdc++.h>
using namespace std;
int m, n, s;
int main() {
  cin >> m >> n;
  // for (int i = m % 17 ? m + 17 - m % 17 : m; i <= n; i += 17) {
  // for (int i = m + (17 - m % 17) % 17; i <= n; i += 17) {
  for (int i = (m + 16) / 17 * 17; i <= n; i += 17) {
    s += i;
    // s += (i % 17 == 0) * i;
    //  if (i % 17 == 0) {
    //    s += i;
    //  }
  }
  cout << s;
  return 0;
}