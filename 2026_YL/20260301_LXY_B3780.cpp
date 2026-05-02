#include <bits/stdc++.h>
using namespace std;
int n, m, x, y, z, t;
int main() {
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    cin >> x >> y >> z;
    t += x * y * z;
  }
  cout << (t + m - 1) / m << ' ' << (t % m ? t % m : m);
  return 0;
}