#include <bits/stdc++.h>
using namespace std;
int n;
double ans = 0;
int main() {
  cin >> n;
  for (int i = 1, j = 1; i <= n; i++, j *= -1) {
    ans += 1.0 * j / i;
  }
  cout << fixed << setprecision(4) << ans;
  return 0;
}