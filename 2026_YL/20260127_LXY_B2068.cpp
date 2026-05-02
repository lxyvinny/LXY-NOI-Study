#include <bits/stdc++.h>
using namespace std;
int n, sws, g, s, b, q, c, ans;
int main() {
  for (cin >> n; n--;) {
    cin >> sws;
    g = sws % 10;
    s = sws / 10 % 10;
    b = sws / 100 % 10;
    q = sws / 1000;
    c = g - q - b - s;
    ans += c > 0;
    // if (c > 0) {
    //   ans++;
    // }
  }
  cout << ans << '\n';
  return 0;
}