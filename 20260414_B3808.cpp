#include <bits/stdc++.h>
using namespace std;
const int kL = (1e6 + 1) * 2;
long long n, k, a[kL], sum[10001];
int main() {
  cin >> n >> k, n *= 2;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  // 计算每组的总和。
  for (int i = 1; i <= n; i++) {
    sum[i % k] += a[i];
  }
  // 输出变换后的 a[i]。
  for (int i = 1; i <= n; i++) {
    cout << (i % 2 ? sum[i % k] % i : a[i]) << ' ';
    // if (i % 2) {
    //   cout << sum[i % k] % i << ' ';
    // } else {
    //   cout << a[i] << ' ';
    // }
  }
  return 0;
}