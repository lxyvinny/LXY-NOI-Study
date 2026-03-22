#include <bits/stdc++.h>
using namespace std;
int s, n;
float x;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> x;
    s += x;
  }
  cout << fixed << setprecision(5) << s << " " << 1.0 * s / n;
  return 0;
}