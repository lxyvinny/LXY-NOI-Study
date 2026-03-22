#include <bits/stdc++.h>
using namespace std;
int n, m, x, y, a[20], cnt;
int main() {
  cin >> n >> m;
  // 输入 x y，并记录冲突的原材料的
  for (int i = 0; i < m; i++) {
    cin >> x >> y, x--, y--;
    a[x] |= 1 << y, a[y] |= 1 << x;
  }
  for (int i = 0; i < 1 << n; i++) {
    int s = 0;
    for (int j = 0; j < n; j++) {
      if (i >> j & 1) {  // 判断 i 的 j 号位是否为集合。
        s |= a[j];       // s 位或并赋值 a[j]。
      }
    }
    cnt += !(i & s);
    // if ((i & s) == 0) {
    //   cnt++;
    // }
  }
  cout << cnt;
  return 0;
}