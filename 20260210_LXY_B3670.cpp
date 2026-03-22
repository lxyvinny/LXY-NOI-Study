#include <bits/stdc++.h>
using namespace std;
int n, r, k, p, cnt;
int main() {
  cin >> n >> r;
  for (int i = 1; i <= n; i++) {
    cin >> k >> p;
    if (cnt < k && r >= p) {
      cnt = k;
    }
  }
  cout << cnt;
  return 0;
}