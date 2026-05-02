#include <bits/stdc++.h>
using namespace std;
int n, sz[101];
int main() {
  cin >> n;
  // i→n
  for (int i = 1; i <= n; i++) { // 让变量 i 从 1 开始逐一增加到 n
    cin >> sz[i]; // 读入一个整数到数组 sz 的下标为 i 的位置
  }
  // n→i
  for (int i = n; i >= 1; i--) {
    cout << sz[i] << ' '; // 输出 sz 的下标为 i 的位置中的元素
  }
  return 0;
}