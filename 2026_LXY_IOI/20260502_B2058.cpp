#include <bits/stdc++.h>
using namespace std;
int n, x, y, z, a, b, c;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> x >> y >> z, a += x, b += y, c += z;
  }
  cout << a << ' ' << b << ' ' << c << ' ' << a + b + c;
  return 0;
}