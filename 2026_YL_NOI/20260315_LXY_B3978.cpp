#include <bits/stdc++.h>
using namespace std;
int a, b, cnt;
bool Check1(string m) {
  for (int i = 1; i <= m.size() - 2; i++) {
    if (m[i] != m[i - 1] && m[i] != m[i + 1]) {
      return 0;
    }
  }
  return 1;
}
bool Check2(string m) {
  return m[0] == m[1] && m[m.size() - 1] == m[m.size() - 2];
}
int main() {
  cin >> a >> b;
  for (int i = a; i <= b; i++) {
    string t = "";
    for (int j = i; j > 0; j /= 2) {
      t += j % 2 + '0';
    }
    if (t.size() == 1) {
      continue;
    }
    cnt += Check1(t) && Check2(t);
  }
  cout << cnt;
  return 0;
}
// Check1 和 Check2 判断的属性不一样，一个判合法一个判不合法