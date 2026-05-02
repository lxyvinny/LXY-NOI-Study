#include <bits/stdc++.h>
using namespace std;
const int kL = 2001;
int a[kL], b[kL], c[kL * 2];
string s1, s2;
int main() {
  cin >> s1 >> s2;
  for (int i = 0; i < s1.size(); i++) {
    a[i] = s1[s1.size() - i - 1] - '0';
  }
  for (int i = 0; i < s2.size(); i++) {
    b[i] = s2[s2.size() - i - 1] - '0';
  }
  for (int i = 0; i < s1.size(); i++) {  // 乘积计算，注意：这里不是一位数乘多位数，而是多位数乘多位数，所以要用循环嵌套。
    for (int j = 0; j < s2.size(); j++) {
      c[i + j] += a[i] * b[j];
    }
  }
  for (int i = 0; i < s1.size() + s2.size(); i++) {
    c[i + 1] += c[i] / 10;
    c[i] %= 10;
  }
  int i = kL * 2 - 1;
  for (; i > 0 && !c[i]; i--) {
  }
  for (; i >= 0; i--) {
    cout << c[i];
  }
  return 0;
}