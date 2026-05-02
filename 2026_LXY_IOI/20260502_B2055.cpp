#include <bits/stdc++.h>
using namespace std;
double n, a, sum;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a, sum += a;
  }
  cout << fixed << setprecision(4) << 1.0 * sum / n;
  return 0;
}