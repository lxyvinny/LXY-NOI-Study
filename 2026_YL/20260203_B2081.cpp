#include <bits/stdc++.h>
using namespace std;
int n, sum;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {  // 枚举从1到n所有的数
    sum += !(i % 7 == 0 || i % 10 == 7 || i / 10 == 7) * i * i;
    // if (!(i % 7 == 0 || i % 10 == 7 || i / 10 == 7)) {  // 判断输入数字中的所有与7无关的数字并取反。i/10%10让正整数的范围小于100。
    //   sum += i * i;
    // }
  }
  cout << sum;
  return 0;
}
/*
求与7无关的正整数的平方和，正整数的数字小于等于n，n < 100。
枚举输入数字中的所有与7无关的数字。
求出所有与7无关的数字的平方和。
*/