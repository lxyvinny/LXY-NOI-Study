#include <bits/stdc++.h>
using namespace std;
int k, cnt;
string m;
int main() {
  cin >> m >> k;      // 输入m和k。m是字符串。
  for (char c : m) {  // 声名char类型的c变量用来存储m，并且循环m的长度次数。
    cnt += c == '3';  // 判断字符串c里面有没有3这个字符，如果有将cnt加一。
  }
  // for (int i = 0; i < m.length(); i++) { // 声名一个i变量并将其赋值为0，如果i的值小于m的长度就继续循环，i自增。
  //   cnt += m[i] == '3'; // 判断m的第i个字符是否为3，如果是就将cnt加一。
  // }
  cout << (cnt == k ? "YES" : "NO");  // 输出并判断cnt的次数跟输入的k条件是否相同，如果相同输出YES，否则输出NO。
  return 0;
}