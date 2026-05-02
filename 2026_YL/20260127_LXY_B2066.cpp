#include <bits/stdc++.h>
using namespace std;
int n;
double p, x, y, t;
int main() {
  for (cin >> n; n--;) {
    cin >> x >> y >> p;
    t += sqrt(x * x + y * y) / 50 * 2 + 1.5 * p;
  }
  cout << int(ceil(t)) << '\n';
  return 0;
}