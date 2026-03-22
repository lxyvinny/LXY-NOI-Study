#include <bits/stdc++.h>
using namespace std;
// 最大行、列不超过 20。
const int kMaxN = 21;
int n, m, k, a[kMaxN][kMaxN], answer = 1e9;
int main() {
  // 输入 n(矩阵的行数), m(矩阵的列数), k(至少要拔萝卜的个数)。
  cin >> n >> m >> k;
  // 读入一个 n × m 的矩阵。
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  // 枚举矩形的上边界 i0。
  for (int i0 = 0; i0 < n; i0++) {
    // 枚举矩形的下边界 i1（>= i0）。
    for (int i1 = i0; i1 < n; i1++) {
      // 枚举矩形的左边界 j0。
      for (int j0 = 0; j0 < m; j0++) {
        // 枚举矩形的右边界 j1（>= j0）。
        for (int j1 = j0; j1 < m; j1++) {
          // cnt 用来统计当前矩形里有多少个 1。
          int cnt = 0;
          // 枚举当前矩形中的每一个格子。
          for (int i = i0; i <= i1; i++) {
            for (int j = j0; j <= j1; j++) {
              // 如果这个格子是 1，就加 1(cnt += a[i][j] == 1;的缩写)。
              cnt += a[i][j];
            }
          }
          // 如果这个矩形中 1 的数量不少于 k。
          if (cnt >= k) {
            // 计算矩形面积，并更新最小值。
            answer = min(answer, (i1 - i0 + 1) * (j1 - j0 + 1));
          }
        }
      }
    }
  }
  cout << answer;
  return 0;
}