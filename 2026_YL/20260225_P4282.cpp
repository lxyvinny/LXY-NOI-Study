#include <bits/stdc++.h>
using namespace std;
const int kMaxN = 1e5 + 1;
int n, m[kMaxN], a[kMaxN], b[kMaxN];
char op;
int main() {
  cin >> n;
  for (int i = n - 1; i >= 0; i--) {
    cin >> m[i];
  }
  for (int i = n - 1; i >= 0; i--) {
    cin >> a[i];
  }
  cin >> op;
  for (int i = n - 1; i >= 0; i--) {
    cin >> b[i];
  }
  for (int i = 0; i < n; i++) {
    a[i] += op == '+' ? b[i] : -b[i];
    a[i + 1] += a[i] / m[i];
    a[i] %= m[i];
    if (a[i] < 0) {
      a[i] += m[i];
      a[i + 1]--;
    }
    // if (op == '+') {
    //   a[i] += b[i];
    //   a[i + 1] += a[i] / m[i];
    //   a[i] %= m[i];
    // } else {
    //   a[i] -= b[i];
    //   if (a[i] < 0) {
    //     a[i] += m[i];
    //     a[i + 1] -= 1;
    //   }
    // }
  }
  for (int i = n - 1; i >= 0; i--) {
    cout << a[i] << ' ';
  }
  return 0;
}