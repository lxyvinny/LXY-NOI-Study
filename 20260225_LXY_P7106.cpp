#include <bits/stdc++.h>
using namespace std;
string s;
int x;
int main() {
  cin >> s;
  cout << '#';
  for (int i = 1; i < s.size(); i++) {
    // 这里是用来计算它的 16进制反色码，这里的 255 相当于 15，所以可以用 15 减 (s[i] <= '9' ? s[i] - '0' : s[i] - 'A' + 10)
    // 注意：这里大于九的部分是要求字母的转换成数值的值，而且cout 后面要写 char (……)，如果不写，输出的可能是数值的 ASCII 值.
    x = 15 - (s[i] <= '9' ? s[i] - '0' : s[i] - 'A' + 10);
    cout << char(x <= 9 ? x + '0' : x - 10 + 'A');
  }
  return 0;
}