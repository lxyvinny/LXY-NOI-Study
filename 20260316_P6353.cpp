#include <bits/stdc++.h>
using namespace std;
int a, w[3];
string s;
int main() {
  cin >> s;
  for (int i = 0; i < 3; i++) {
    w[i] = pow(2, i);
  }
  for (; s.size() % 3 != 0; s = '0' + s) {
  }
  for (int i = 0; i < s.size(); i += 3) {
    // int sum = w[0] * (s[i] - '0') + w[1] * (s[i + 1] - '0') + w[2] * (s[i + 2] - '0'); 这里错误的原因：1.下标错误
    int sum = (s[i] - '0') * w[2] + (s[i + 1] - '0') * w[1] + (s[i + 2] - '0') * w[0];  // 计算 8 进制每一位的值（要三位三位的算，因为 1 + 2 + 4 恰好 = 7）。
    cout << sum;
  }
  return 0;
}

/*
这段代码不用 w 这个数组也可以，因为 w 这个数组是计算乘方的。
如果不用 w 这个数组只要改 (s[i] - '0') * 4 + (s[i + 1] - '0') * 2 + (s[i + 2] - '0') * 1 这里把 w[0]、w[1]、w[2] 替换成了 1、2、4。
#include <bits/stdc++.h>
using namespace std;
int a;
string s;
int main() {
  cin >> s;
  for (; s.size() % 3 != 0; s = '0' + s) {
  }
  for (int i = 0; i < s.size(); i += 3) {
    // int sum = w[0] * (s[i] - '0') + w[1] * (s[i + 1] - '0') + w[2] * (s[i + 2] - '0'); 这里错误的原因：1.下标错误
    int sum = (s[i] - '0') * 4 + (s[i + 1] - '0') * 2 + (s[i + 2] - '0') * 1; // 计算 8 进制每一位的值
    cout << sum;
  }
  return 0;
}
*/

/*
使二进制数的位数是3的倍数。
将二进制数分成3位一组。
每组转换成八进制数。
输出结果。
*/