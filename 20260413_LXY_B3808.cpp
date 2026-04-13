#include <bits/stdc++.h>
using namespace std;
const int kL = 1e6 + 1;
int n, k, a[kL], ans[kL], sum[10001];
int main() {
  cin >> n >> k, n *= 2;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  for (int i = 1; i <= n; i++) {
    cout << ans[i] << ' ';
  }
  return 0;
}

/*
对于 a[i]，若 i mod 2 = 0，则称 a[i] 为偶位数；若 i mod 2 = 1，则称 a[i]为奇位数。
对于 a[i]，记 i mod k = p，则称 a[i] 为第 p 象限数，其中 k 为给定的参数。
*/