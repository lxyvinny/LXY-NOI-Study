#include <bits/stdc++.h>
using namespace std;
bool light[5010];  // 一开始所有的灯都是关着的，因为C++ 中 bool 默认是 false
int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) { // i为几表示第几个人检查灯
    for (int j = 1; j <= n; j++) { // 一个 j，表示一个i检查一盏灯
      if (j % i == 0) { // 判断这盏灯要不要被这个人动？意思是：如果灯的编号 j 是 人的编号 i 的倍数
        light[j] = !light[j]; // 对布尔值做反向处理
      }
    }
  }
  for (int i = 1; i <= n; i++) { // 从 1 到 n 检查每一盏灯
    if (light[i]) { // 如果 light[i] == true
      cout << i << ' '; // 就输出编号
    }
  }
  return 0;
}