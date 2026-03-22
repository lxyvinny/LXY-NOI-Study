#include <bits/stdc++.h>
using namespace std;
const int kMaxN = 5 * 1e5 + 1;
int x[kMaxN], y[kMaxN], n, maxf;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> x[i] >> y[i];
  }
  for (int i = 1; i < n; i++) {
    maxf = max(maxf, x[i + 1] - x[i] - y[i]);
  }
  cout << maxf;
  return 0;
}