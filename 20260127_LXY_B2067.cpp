#include <bits/stdc++.h>
using namespace std;
int m, n, qysl, cnt;
int main() {
  for (cin >> m >> n; n--;) {
    cin >> qysl;
    if (m - qysl < 0) {
      cnt++;
    } else {
      m -= qysl;
    }
  }
  cout << cnt << '\n';
  return 0;
}