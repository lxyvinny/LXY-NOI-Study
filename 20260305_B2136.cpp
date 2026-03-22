#include <bits/stdc++.h>
using namespace std;
int n, cnt = 1;
string x, y;
bool Check1(int n1) {
  for (int i = 2; i * i <= n1; i++) {
    if (n1 % i == 0) {
      return 0;
    }
  }
  return 1;
}
bool Check2(int n2) {
  x = to_string(n2);            // 把 n2 转换成字符串，并赋值到x
  y = x;                        // 用 y 拷贝字符串
  reverse(y.begin(), y.end());  // 翻转 y
  return x == y;                // 判断 x 是否等于 y
}
int main() {
  cin >> n;
  for (int i = 12; i <= n; i++) {
    cnt += Check1(i) && Check2(i);
    // if (Check1(i) && Check2(i)) {
    //   cnt++;
    // }
  }
  cout << cnt;
  return 0;
}