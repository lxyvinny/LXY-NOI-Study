#include <bits/stdc++.h>
using namespace std;
const int kMaxN = 4e6;
long long n, m, a[kMaxN], l, r, sum, ans;
int main() {
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for (int i = 1, j = 1; i <= n; i++) {
    sum += a[i];
    for (; sum > m; j++) {
      sum -= a[j];
    }
    if (ans < sum) {
      ans = sum;
      l = j, r = i;
    }
    // for (int j = i, sum = 0; j >= 1; j--) {
    //   sum += a[j];
    //   if (sum <= m && sum > ans) {
    //  }   ans = sum;
    //     l = j, r = i;
    //   }
    // }
  }
  cout << l << ' ' << r << ' ' << ans << ' ';
  return 0;
}