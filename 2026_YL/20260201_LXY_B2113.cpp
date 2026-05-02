#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
  cin >> s;
  int n = s.size(); // 声名一个n整型变量并赋值为s的长度
  for (int i = 0; i < n; i++) { // 建立一个从0到n减一的循环
    if (i == n - 1) { // 判断i是不是最后一个字符
      cout << char(s[i] + s[0]); // 如果是把s的第一个字符和s的末尾字符的ASCII码给相加并转换成字符输出
    } else {
      cout << char(s[i] + s[i + 1]); // 如果i不是最后一个字符把s的上一个字符和这一个字符的ASCII码值相加并输出
    }
  }
  return 0;
}
// int sum = 0;
// string s;
// int main() {
//   cin >> s;
//   int n = s.length();
//   for (int i = 0; i < n; i++) {
//     if (i == n - 1) { // 判断i是不是最后一个字符，如果是把s的第一个字符和s的末尾字符的ASCII码给相加
//       sum = s[i] + s[0];
//     } else { // 如果i不是最后一个字符把s的上一个字符和这一个字符相加
//       sum = s[i] + s[i + 1];
//     }
//     char newchar = char(sum); // 把相加过的sum的值转换成ASCII的字符
//     cout << newchar; // 把相加过的sum的ASCII码输出
//   }
//   return 0;
// }