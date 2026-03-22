#include <bits/stdc++.h>
using namespace std;

// 声明变量 n 表示方阵的大小，b 为方阵存储数据的数组，a 用于存储每个密码的按位或结果
int n, b[1000][1000], a[1000];

int main() {
  // 输入方阵的大小 n
  cin >> n;

  // 遍历方阵的每一行
  for (int i = 0; i < n; i++) {
    // 遍历方阵的每一列
    for (int j = 0; j < n; j++) {
      // 输入方阵的每个元素 b[i][j]
      cin >> b[i][j];

      // 如果当前元素不是对角线上的元素，则进行按位或运算
      if (i - j != 0) {
        // 将当前元素 b[i][j] 和 a[i] 进行按位或运算，合并结果到 a[i]
        a[i] |= b[i][j];
      }
    }
  }

  // 输出数组 a 中每个元素的结果
  for (int i = 0; i < n; i++) {
    cout << a[i] << ' ';  // 输出第 i 个密码的按位或结果
  }

  return 0;
}

// 以下的代码错误的原因是：这里的位运算是 |=。
// cin >> n;
// for (int i = 0; i < n; i++) {
//   for (int j = 0; j < n; j++) {
//     cin >> b[i][j];
//   }
// }
// for (int i = 0; i < n; i++) {
//   for (int j = 0; j < n; j++) {
//     if (i - j != 0) {
//       a[i] &= b[i][j];
//     }
//   }
// }
// for (int i = 0; i < n; i++) {
//   cout << a[i];
// }
return 0;
}