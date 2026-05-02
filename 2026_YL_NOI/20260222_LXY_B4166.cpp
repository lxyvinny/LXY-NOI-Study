#include <bits/stdc++.h>
using namespace std;
unsigned long long x, T, cur, ans;
int main() {
  for (cin >> T; T--;) {
    cin >> x;
    cur = 0;
    ans = 0;
    for (; x > 0; x /= 2) {
      if (x % 2 == 1) {
        cur++;
        if (cur > ans) {
          ans = cur;
        }
      } else {
        cur = 0;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}