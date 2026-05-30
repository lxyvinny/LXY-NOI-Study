#include <bits/stdc++.h>
using namespace std;
int n;
double x, xa, xb, y, ya, yb;
int main() {
  cin >> n >> xa >> xb;
  x = xb / xa;
  for (int i = 1; i < n; i++) {
    cin >> ya >> yb;
    y = yb / ya;
    if (y - x > 0.05) {
      cout << "better\n";
    } else if (x - y > 0.05) {
      cout << "worse\n";
    } else {
      cout << "same\n";
    }
  }
  return 0;
}