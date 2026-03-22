#include <bits/stdc++.h>
using namespace std;
int n, s;
int main() {
  cin >> n;
  for (int i = 1, x; i <= n; i++) {
    cin >> x;
    s = s + x;
  }
  cout << fixed << setprecision(3) << 1.0 * s / n;
  return 0;
}