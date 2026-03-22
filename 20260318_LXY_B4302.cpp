#include <bits/stdc++.h>
using namespace std;
int n, a, yh;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a;
    yh ^= a;
  }
  cout << yh;
  // cin >> n;
  // for (int i = 1; i <= n; i++) {
  //   cin >> a[i];
  //   c[a[i]]++;
  //   Max = max(a[i], Max);
  // }
  // for (int i = 0; i <= Max; i++) {
  //   if (c[i] % 2) {
  //     cout << a[i] << ' ';
  //   }
  // }
  return 0;
}

/*
思路：把所有的输入数字全部异或在一起。那些出现偶数次的数字两两抵消变成了 0，最后剩下的那个结果，就是那个出现了奇数次的数。
*/