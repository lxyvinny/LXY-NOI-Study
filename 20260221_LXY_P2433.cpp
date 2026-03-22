#include <bits/stdc++.h>
using namespace std;
int t;
int main() {
  cin >> t;
  switch (t) {
    case 1:
      cout << "I love Luogu!";
    case 2:
      cout << 10 - (10 - (2 + 4)) << ' ' << 10 - (2 + 4);
    case 3:
      cout << (14 - (14 % 4)) / 4 << ' ' << 14 - 14 % 4 << ' ' << 14 % 4;
    case 4:
      cout << fixed << setprecision(6) << 500.0 / 3;
    case 5:
      cout << (260 + 220) / (12 + 20);
    case 6:
      cout << sqrt(6 * 6 + 9 * 9);
    case 7:
      cout << 100 + 10 << '\n'
           << 100 + 10 - 20 << '\n'
           << (100 + 10 - 20) - (100 + 10 - 20);
    case 8:
      cout << 2 * 3.141593 * 5 << '\n'
           << 3.141593 * 25 << '\n'
           << 4 / 3 * 3.141593 * 125;
    case 9:
      cout << ((1 * 2 + 1) * 2 + 1) * 2 + 1;
    case 10:
      cout << 10 / (30 / 8);
    case 11:
      cout << 100 / (8 - 5);
    case 12:
      cout << 'M' - 'A' + 1 << '\n'
           << char('A' + (18 - 1));
    case 13:
      cout << 4 / 3 * 3.141593 * 64 << '\n'
           << 4 / 3 * 3.141593 * 1000;
    case 14:
      cout << (120 - 20) / 2;
  }
  return 0;
}