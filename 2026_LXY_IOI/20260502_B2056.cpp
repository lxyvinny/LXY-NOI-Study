#include <bits/stdc++.h>
using namespace std;
int n, a, sum;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a, sum += a;
  }
  cout << sum << ' ' << fixed << setprecision(5) << 1.0 * sum / n;
  return 0;
}