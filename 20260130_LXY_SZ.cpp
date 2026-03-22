#include <bits/stdc++.h>
using namespace std;
int main() {
  // 定义一个长度为7的数组
  int h[7]
      // 找到数组里最大的数，并输出
      int max = a[0];
  for (int i; i <= h; i++) {
    cin >> h[i];
    if (h[i] > max) {
      max = h;
    }
  }
  cout << max;

  // 定义一个长度为7的数组
  int d = 7;
  // 交换数组里第三个数和第五个数
  for (int e = 0; e <= 6; e++) {
    cin >> d[e];
  }
  for (int f = 0; f <= 6; f++) {
    cout << a[b] << ','
  }
  // 交换第三个数a[2]数和第五个数a[4]
  int g;
  g = a[2];
  a[2] = a[4];
  a[4] = d;
  // 数组的定义
  int a[5];
  // 数组的输入
  for (int c = 0; c <= 4; c++) {
    cin >> a[c];
  }

  /*不用这样输入，原因：如果数组的长度是 10000 就要写 10000 个输入
  cin << a[0];
  cin << a[1];
  cin << a[2];
  cin << a[3];
  cin << a[4];
  */

  // 数组的输出
  for (int b = 0; b <= 4; b++) {
    cout << a[c] << ',';
  }
  /*不用这样输出，原因：如果数组的长度是 10000 就要写 10000 个输出
  cout << a[0];
  cout << a[1];
  cout << a[2];
  cout << a[3];
  cout << a[4];
  */

  // 反向输出数组的数
  for (int c = 4; c >= 0; c++) {
    cout << a[c] << ',';
  }
  return 0;
}