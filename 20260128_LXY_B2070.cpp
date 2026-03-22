#include <bits/stdc++.h>
using namespace std;
int n;
double p1 = 1, p2 = 2, h, c, Sn;
int main() {
  for (cin >> n; n--;) {
    h += 1 / p1;
    p1 += 2;
    c -= 1 / p2;
    p2 += 2;
    Sn += h - c;
  }
  cout << fixed << setprecision(4) << Sn << '\n';
  return 0;
}