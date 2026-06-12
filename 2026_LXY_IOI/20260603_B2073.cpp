#include <bits/stdc++.h>
using namespace std;
int a, b, n, r, ans;
int main() {
  cin >> a >> b >> n;
  r = a % b;
  for (int i = 1; i <= n; i++) {
    r *= 10;
    ans = r / b;
    r = r % b;
  }
  cout << ans;
  return 0;
}