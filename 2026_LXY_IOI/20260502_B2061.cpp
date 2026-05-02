#include <bits/stdc++.h>
using namespace std;
int n, a, x, y, z;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a;
    x += a == 1, y += a == 5, z += a == 10;
  }
  cout << x << '\n' << y << '\n' << z;
  return 0;
}