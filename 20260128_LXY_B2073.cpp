#include <bits/stdc++.h>
using namespace std;
int a, b, n, r, temp = 0;
int main() {
  cin >> a >> b >> n;
  r = a % b;
  for (int i = 1; i <= n; i++) {
    r *= 10;
    temp = r / b;
    r = r % b;
  }
  cout << temp << '\n';
  // cin >> a >> b >> n;
  // s = a / b;
  // ans = s * 10 / a;6
  // cout << ans << '\n';
  return 0;
}