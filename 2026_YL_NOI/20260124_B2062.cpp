#include <bits/stdc++.h>
using namespace std;
int n, j, y, t, a = 0, b = 0, c = 0;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> j >> y >> t;
    a += j;
    b += y;
    c += t;
  }
  cout << a << ' ' << b << ' ' << c << ' ' << a + b + c;
  return 0;
}