#include <bits/stdc++.h>
using namespace std;
long long t, n, m;
int main() {
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cin >> n >> m;
    if (n == m) {
      cout << 0 << '\n';
    } else {
      int dj = ((n | m) != m) + ((n & m) != m);
      // 这里先算位运算 n | m 和 n & m。
      // 在判断是否不等于 m。
      // 最后吧两个布尔值相加 true 为 1，false 为 0。
      cout << dj << '\n';
    }
  }
  return 0;
}
// cin >> t;
// for (int i = 1; i <= t; i++) {
//   cin >> n >> m;
//   int dj = 0;
//   string s1 = "", s2 = "";
//   for (int j = n; j > 0; j /= 2) {
//     s1 += j + '0';
//   }
//   for (int j = m; j > 0; j /= 2) {
//     s2 += j + '0';
//   }
//   for (int j = 0; j < s1.size() && j < s2.size(); j++) {
//     dj += s1[j] != s2[j];
//   }
//   dj += abs(int(s1.size()) - int(s2.size()));
//   cout << dj << '\n';
// }