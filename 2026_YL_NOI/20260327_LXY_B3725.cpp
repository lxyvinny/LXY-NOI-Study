#include <bits/stdc++.h>
using namespace std;
int n, a[500001], m;
long long M(int l, int r) {
  if (r - l <= 5) {
    return *max_element(a + l, a + r + 1);  // 这里是返回数组 a + l 到 a + r + 1 之间的最大值。
  } else {
    return M(l, (l + r) / 2) % max(M((l + r) / 2 + 1, r), 7LL) + (a[(l + r) / 2] - 1);
  }
}
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  cout << M(1, n);
  return 0;
}