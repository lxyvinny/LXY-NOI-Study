#include <bits/stdc++.h>
using namespace std;
int n, q, ops;
string s[15];
int main() {
  cin >> n >> q;
  for (int i = 1; i <= n; i++) {
    cin >> s[i];
  }
  while (q--) {
    cin >> ops;
    if (ops == 1) {
      int x, y, i;
      cin >> x >> y >> i;
      s[y].insert(i, s[x]);
    } else {
      int y;
      cin >> y;
      cout << s[y] << '\n';
    }
  }
  return 0;
}