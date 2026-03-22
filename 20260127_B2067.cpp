#include <bits/stdc++.h>
using namespace std;
int m, n, q, cnt;
int main() {
  for (cin >> m >> n; n--;) {
    cin >> q;
    if (m < q) {
      cnt++;
    } else {
      m -= q;
    }
  }
  cout << cnt;
  return 0;
}