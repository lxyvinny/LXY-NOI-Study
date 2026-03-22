#include <bits/stdc++.h>
using namespace std;
long long n, a[2], o;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++, o = 0) {
    cin >> a[0] >> a[1];
    for (; a[0] && a[1]; o = !o) {
      a[o] = a[o] < a[!o] ? a[o] + 1 : a[o] / 2;
    }
    cout << a[0] << ' ' << a[1] << '\n';
  }
  return 0;
}