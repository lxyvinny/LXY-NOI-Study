#include <bits/stdc++.h>
using namespace std;
int n;
double Sn() {
  double t;
  for (int i = 1, j = 1; i <= n; i++, j *= -1) {
    t += 1.0 * j / i;
  }
  return t;
}
int main() {
  cin >> n;
  cout << fixed << setprecision(4) << Sn();
  return 0;
}