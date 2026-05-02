#include <bits/stdc++.h>
using namespace std;
const int kMaxA = 3005;
int n, m, a[kMaxA];
int main() {
  cin >> n >> m;
  // 特殊情况(m 等于 0)。
  if (m == 0) {
    cout << 0;
    return 0;
  }
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  // 计算第一个窗口的和(第一个窗口单独计算)。
  int sum = 0;
  for (int i = 1; i <= m; i++) {
    sum += a[i];
  }
  int ans = sum;
  // 滑动窗口。
  for (int i = 1; i <= n - m; i++) {
    sum = sum - a[i] + a[i + m];
    ans = min(ans, sum);
  }
  cout << ans;
  return 0;
}