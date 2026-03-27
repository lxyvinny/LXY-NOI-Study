#include <bits/stdc++.h>
using namespace std;
const int kMaxN = 5e5 + 1;
int n, a[kMaxN];
long long M(int l, int r) {
  return r - l <= 5 ? *max_element(a + l, a + r + 1) : M(l, (l + r) / 2) % max(M((l + r) / 2 + 1, r), 7LL) + (a[(l + r) / 2] - 1);
}
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  cout << M(1, n);
  return 0;
}