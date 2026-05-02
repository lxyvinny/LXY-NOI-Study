#include <bits/stdc++.h>
using namespace std;
const int kL = 2e4;
string s[2];
int a[2][kL], n, o;
int main() {
  for (int o = 0; o <= 1; o++) {
    cin >> s[o];
    for (int i = 0; i < s[o].size(); i++) {
      a[o][i] = s[o][s[o].size() - 1 - i] - '0';  // 转换。
    }
    n = max(n, int(s[o].size())); // 找到最大字符串的长度.
  }
  o = s[1].size() > s[0].size() || s[1].size() == s[0].size() && s[1] > s[0];  // 判断 b 是否大于 a，如果 b 大于 a o 赋值为 1，否则为 0。
  if (o) {                                                                     // 判断 o 是否为 1（判断 b 是否大于 a）。
    cout << '-';                                                               // 如果 b 大于 a，输出 -。
  }
  for (int i = 0; i < n; i++) {  // 减法运算并处理退位
    a[o][i] -= a[!o][i];
    if (a[o][i] < 0) {
      a[o][i] += 10, a[o][i + 1]--;
    }
  }
  for (; n && !a[o][n]; n--) {  // 寻找第一个不为 0 的位置（从高位到低位）。
  }
  for (; n >= 0; n--) {
    cout << a[o][n];
  }
  return 0;
}