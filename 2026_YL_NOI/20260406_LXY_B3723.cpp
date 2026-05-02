#include <bits/stdc++.h>
using namespace std;
const int kL = 1e3;
long long n, a[kL], f, b, nzck[kL];  // f 表示 Farmer John，b 表示 Bessie。
int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  for (int i = 1; i <= n; i++) {
    long long q;
    if (i % 2 != 0) {
      q = f;
    } else {
      q = b;
    }
    int zx = -1;
    for (int j = 0; j < n; j++) {
      if (nzck[j] == 0) {
        zx = j;
        break;
      }
    }
    int mb = -1;
    if (a[zx] > q) {
      mb = zx;
    } else {
      for (int j = n - 1; j >= 0; j--) {
        if (!nzck[j] && a[j] <= q) {
          mb = j;
          break;
        }
      }
    }
    if (i % 2 != 0) {
      f += a[mb];
    } else {
      b += a[mb];
    }
    nzck[mb] = 1;
  }
  cout << f << ' ' << b;
  return 0;
}