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
  for (int i = 0; i < n; i  ++) {
    for (int j = 0; j < n;) {
      if (a[j] < f) {
        j++;
      } else {
        for (; j >= 0 && nzck[j]; j--) {
        }
        f += a[j];
        nzck[j] = 1;
      }
    }
    for (int j = 0; j < n;) {
      if (a[j] < f) {
        j++;
      } else {
        for (; j >= 0 && nzck[j]; j--) {
        }
        b += a[j];
        nzck[j] = 1;
      }
    }
  }
  cout << f << ' ' << b;
  return 0;
}4