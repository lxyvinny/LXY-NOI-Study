#include <bits/stdc++.h>
using namespace std;

int n, i, zs;  // zs, i 用全局变量，便于循环中以及退出循环时依然能够访问

int main() {
  cin >> n;
  for (i = 2; n -= zs; i++) {  // 如果是质数，则减少数量，然后会判断 n 是否不为 0
    zs = 1;
    for (int j = 2; j * j <= i; j++) {
      zs = zs && i % j != 0;  // 如果 i 是质数，就必须保证所有数都不是它的约数
    }
    // 没有必要在循环体的末尾写 if break，可以留到循环下一次判断的时候用执行条件进行判定
  }
  cout << i - 1;  // 退出循环时，i 刚好多加了一次，所以输出时要减少 1
  return 0;
}
