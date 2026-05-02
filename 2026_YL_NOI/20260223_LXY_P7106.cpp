// #include <bits/stdc++.h>
// using namespace std;
// string s, ans;
// int t;
// int main() {
//   cin >> s;
//   for (int i = 1; i < s.size(); i += 2) {
//     if (s[i] < 10 && s[i + 1] < 10) {
//       ans += 255 - (s[i] - '0'), ans += 255 - (a[i + 1] - '0');
//     } else {
//       ans += 255 - (s[i] - 'A' + 10), ans += 255 - (s[i + 1] - 'A')
//     }
//   }
//   return 0;
// }
#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
  cin >> s;
  cout << '#';
  for (int i = 1; i < s.size(); i++) {
    int x = 15 - (s[i] <= '9' ? s[i] - '0' : s[i] - 'A' + 10); // 这里是来计算每一个反色的十六进制颜色码，另外还要加判断 s[i] 小于等于 '9'，因为十六进制有时候会带字母
    cout << char(x < 10 ? x + '0' : x - 10 + 'A');
  }
  return 0;
}