#include <bits/stdc++.h>
using namespace std;
int t, n, k;
int main() {
  for (cin >> t; t--;) {
    int ans = 0;
    for (cin >> n; n--;) {
      cin >> k;
      ans -= k == 0;
    }
    cout << (ans < 0 ? "yes\n" : "no\n");
  }
  return 0;
}