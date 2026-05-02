#include <bits/stdc++.h>
using namespace std;
const int KMaxN = 3e4 + 1;
int a[KMaxN], n, t, w;
int main() {
  cin >> w >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  sort(a + 1, a + n + 1);
  t = n;
  for (int i = 1; i <= t; t--) {
    i += a[i] + a[t] <= w;
    // if (a[i] + a[t] <= w) {
    // i++;
    // ans++;
    // } else {
    // ans++;
    // }
  }
  cout << n - t;
  return 0;
}