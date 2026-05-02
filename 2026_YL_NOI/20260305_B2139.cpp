#include <bits/stdc++.h>
using namespace std;
int m, n, y, t;
bool Check(int n1) {
  for (int i = 2; i * i <= n1; i++) {
    if (n1 % i == 0) {
      return 0;
    }
  }
  return n1 > 1; // 这里要判断 n1 > 1 因为 1 既不是质数也不是合数。
}
int main() {
  cin >> m >> n;
  for (int i = m; i <= n; i++) {
    // 反转模块放这里的原因：因为判断质数的函数里面不能写反转，不然的话可能会报错。
    string s = to_string(i);
    reverse(s.begin(), s.end());
    int x = stoi(s); 
    // 
    if (Check(i) && Check(x)) {
      cout << (!t++ ? "" : ",") << i; // 这里用 !t++ (将下面的 t++ 放这里) 因为把 ++ 放在前面是先 + 1 再取值，把 ++ 放在前面是先取值再 + 1。
    }
  }
  if (!t) {
    cout << "No";
  }
  return 0;
}