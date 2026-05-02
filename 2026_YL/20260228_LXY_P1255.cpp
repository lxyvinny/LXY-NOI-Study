// #include <bits/stdc++.h>
// using namespace std;
// int x[2000], y[2000], z[2000], n;
// int main() {
//   cin >> n;
//   x[0] = 1, y[0] = 1;
//   for (int i = 2; i <= n; i++) {
//     int t = 0;
//     // 计算方法个数（中途有进位）。
//     for (int j = 0; j < 2000; j++) {
//       z[j] = x[j] + y[j] + t;
//       t = z[j] / 10;
//       z[j] %= 10;
//     }
//     // 滚动。
//     for (int j = 0; j < 2000; j++) {
//       x[j] = y[j];
//       y[j] = z[j];
//     }
//   }
//   // 找到第一个不为 0 的位置，并输出。
//   int i = 1999;
//   for (; i > 0 && y[i] == 0; i--) {
//   }
//   for (; i >= 0; i--) {
//     cout << y[i];
//   }
//   return 0;
// }

//许老师的标准程序
#include <bits/stdc++.h>
using namespace std;
const int kMaxN = 2001;
int a[3][kMaxN] = {{1}, {1}}, n, l, o;  // 这里的 a[3][kMaxn] 分别表示 x, y, z, x 和 y 的初始值为 1
int main() {
  cin >> n;
  for (int i = 0; i < n - 1; i++) {
    o = (i + 2) % 3;
    fill(a[o], a[o + 1], 0); // 将 a[o] 到 a[o + 1] 初始化成 0
    for (int j = 0; j < kMaxN - 1; j++) {
      a[o][j] += a[i % 3][j] + a[(i + 1) % 3][j]; // 计算 a[3][j] 的值
      a[o][j + 1] += a[o][j] / 10, a[o][j] %= 10; // 进位处理
    }
  }
  for (l = kMaxN - 1; l && !a[o][l]; l--) { // 找到最高非 0 为（从高位到低位）
  }
  for (; l >= 0; l--) {
    cout << a[o][l];
  }
  return 0;
}