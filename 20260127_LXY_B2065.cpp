#include <bits/stdc++.h>
using namespace std;
int n;
double x, y, xr, xh, yr, yh;
int main() {
  cin >> n >> xr >> xh;
  x = xh / xr;  // 计算有效率
  while (--n) {
    cin >> yr >> yh;
    y = yh / yr;  // 计算新疗法有效率
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