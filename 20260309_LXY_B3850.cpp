#include <bits/stdc++.h>
using namespace std;
string s;
int n, a, pos;
int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    int sum = 0;
    cin >> s;
    for (int j = 1; j <= s.size(); j++) {
      a = (s[s.size() - j] - '0') * (j % 2 ? 7 : 1); // 这里干的事是把 s 的第 s.size() - j 的下边的地方转换，并判断 j 是否为奇数，如果是奇数 a * 7 否则 a * 1。
      for (; a > 9; a = a % 10 + a / 10) { // 把结果的各位数相加。
      }
      sum += a; // sum 加并赋值 a 因为题目说：“其各位数之和是 8 的倍数就是幸运数”。
    }
    cout << (sum % 8 == 0 ? "T\n" : "F\n"); // 输出 T(True) / F(Flase)
  }
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < s[i].size(); j++) {
  //     a[i][j] = s[i][s[i].size() - 1 - j] - '0';
  //     pos = j + 1;
  //     if (pos % 3) {
  //       int sum = a[i][j] * 7, temp = a[i][j];
  //       for (; temp > 0; temp /= 10) {
  //         sum += temp % 10;
  //       }
  //       a[i][j] = sum;
  //     }
  //   }
  // }
  return 0;
}

// 1. 奇偶位置是从右往左算的。
// 2. 计算每一位最终结果的逻辑有问题啊，一个数每次都会变成自己的各位数字和直到小于 10 为止。代码并没有实现这个功能。
// 1.输入，注意：输入的数是字符串，然后要转换并保存到数组里。
// 2.写一个位值变换的 for 循环。
// 3.写一个判断时候位“幸运数”的函数。
// 4.输出 T(True) / F(Flase)。