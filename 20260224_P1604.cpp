#include <bits/stdc++.h>
using namespace std;
int b, d1[10000], d2[10000];
string s1, s2;
int main() {
  cin >> b >> s1 >> s2;
  for (int i = 0; i < s1.size(); i++) {
    // 这里是用来把 B 进制数的每一位的数字元素存到 d1[i] 里面。
    d1[i] = (s1[s1.size() - 1 - i] >= '0' && s1[s1.size() - 1 - i] <= '9') ? (s1[s1.size() - 1 - i] - '0') : (s1[s1.size() - 1 - i] - 'A' + 10);
  }
  for (int i = 0; i < s2.size(); i++) {
    d2[i] = (s2[s2.size() - 1 - i] >= '0' && s2[s2.size() - 1 - i] <= '9') ? (s2[s2.size() - 1 - i] - '0') : (s2[s2.size() - 1 - i] - 'A' + 10);
  }
  // 统计最大长度 (因为最后要倒序输出)。
  int len = max(s1.size(), s2.size());
  for (int i = 0; i < len; i++) {
    d1[i] += d2[i];
    d1[i + 1] += d1[i] / b;
    d1[i] %= b;
  }
  if (d1[len] > 0) {
    len++;
  }
  // 输出部分（要从 len 倒序输出），注意：cout 后面要写 (char)，因为输出的可能是数值的 ASCII 值。
  for (int i = len - 1; i >= 0; i--) {
    cout << (char)(d1[i] > 9 ? d1[i] - 10 + 'A' : d1[i] + '0');
  }
  return 0;
}

/*
// 将s1字符串转换为数字（从右到左）
for (int i = 0; i < s1.size(); i++) {
    // 判断字符是否为数字
    if (s1[s1.size() - 1 - i] >= '0' && s1[s1.size() - 1 - i] <= '9') {
        d1[i] = s1[s1.size() - 1 - i] - '0';  // 数字字符直接转换
    } else {
        d1[i] = s1[s1.size() - 1 - i] - 'A' + 10;  // 字母字符转换为数字
    }
}
// 将s2字符串转换为数字（从右到左）
for (int i = 0; i < s2.size(); i++) {
    // 判断字符是否为数字
    if (s2[s2.size() - 1 - i] >= '0' && s2[s2.size() - 1 - i] <= '9') {
        d2[i] = s2[s2.size() - 1 - i] - '0';  // 数字字符直接转换
    } else {
        d2[i] = s2[s2.size() - 1 - i] - 'A' + 10;  // 字母字符转换为数字
    }
}
*/