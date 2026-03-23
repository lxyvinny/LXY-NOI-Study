#include <bits/stdc++.h>
using namespace std;
double x, ans;
int n;
double f(double x, int n) {
  if (n == 1) {
    return sqrt(1 + x);
  }
  return sqrt(n + f(x, n - 1));
}
int main() {
  cin >> x >> n;
  ans = f(x, n);
  cout << fixed << setprecision(2) << ans;
  return 0;
}