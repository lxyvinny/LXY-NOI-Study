#include <bits/stdc++.h>
using namespace std;
int n;
double p = 1, q = 2, t = p, ans;
int main() {
  for (cin >> n; n--;) {
    ans += q / p, t = p + q, p = q, q = t;
  }
  cout << fixed << setprecision(4) << ans << '\n';
  return 0;
}