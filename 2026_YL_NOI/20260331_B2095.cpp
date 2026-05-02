#include <bits/stdc++.h>
using namespace std;
int n;
double a[300], pj;
int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  pj = accumulate(a + 1, a + n - 1, 0.0) / (n - 2); // accumulate 表示在一个数组范围内求和（结构：accumulate(“范围起点”, “范围终点”, “类型”)）
  cout << fixed << setprecision(2) << pj << ' ' << max(a[n - 2] - pj, pj - a[1]);
  return 0;
}