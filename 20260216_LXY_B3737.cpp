#include <bits/stdc++.h>
using namespace std;
int x, y, temp, cnt;
int main() {
  cin >> x >> y;
  for (int i = x, t = 0; i <= y; i++, temp = 0) {
    t = !i % 4 && i % 100 || !i % 400;
    for (int j = (1 + 2 * 1 + 3 * (1 + 1) / 5 + 1 + 1 / 4 - 1 / 100 + 1 / 400) % 7; 1 <= 365 + t; j++, temp++) {
      if (t == 8) {
        t = 1;
      }
      if (temp == 315 || temp == 314 && temp % 7 == 0 || temp % 7 == 6) {
        cnt++;
        break;
      }
    }
  }
  cout << cnt;
  return 0;
}