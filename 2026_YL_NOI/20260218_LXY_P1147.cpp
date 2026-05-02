#include <bits/stdc++.h>
using namespace std;
int M, k, l, r;
int main() {
  cin >> M;
  int k_max = sqrt(2 * M);
  for (k = k_max; k >= 2; k--) {
    int t = 2 * M - k * (k - 1);
    if (t <= 0) continue;
    if (t % (2 * k) != 0) continue;
    l = t / (2 * k);
    if (l > 0) {
      r = l + k - 1;
      cout << l << ' ' << r << '\n';
    }
  }
  return 0;
}