#include <bits/stdc++.h>
using namespace std;
const int kL = 1e5 + 9;
string s;
long long a[100001], b;
int main() {
  cin >> s >> b;
  for (int i = 0; i < s.size(); i++) {
    a[i] = s[s.size() - i - 1] - '0';  // 转换，注意：这这里的下标是 s.size() - i - 1 而不是 i 因为 a[i] 的数位没跟 b 的数位对齐。
  }
  for (int i = 0; i < s.size(); i++) {
    a[i] *= b;  // 乘法计算。
  }
  for (int i = 0; i < s.size() + 9; i++) {
    a[i + 1] += a[i] / 10;  // 进位处理。
    a[i] %= 10;
  }
  int i = s.size() + 8;
  for (; i > 0 && a[i] == 0; i--) {  // 这里有一个判断是 i > 0 注意：这里是大于 0 而不是大于等于 0 因为循环不管什么都是先变量修改完后再判断（第一次除外）。
  }
  for (; i >= 0; i--) {
    cout << a[i];
  }
  return 0;
}