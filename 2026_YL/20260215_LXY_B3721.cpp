#include <bits/stdc++.h>
using namespace std;
int t, x, y, temp = 1;
int main() {
  cin >> t >> x >> y;
  x++;
  for (; x < 0 && y > 0;) {
    temp *= -1;
    if (temp == -1) {
      y = ceil(y / 2);
    } else {
      x = ceil(x / 2);
    }
    if (x == 0 || y == 0) {
      cout << x << y;
      break;
    }
  }
  return 0;
}