#include <bits/stdc++.h>
using namespace std;
long long a[1000001], x = 1e18, y, n;
int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    x = min(x, a[i]), y = max(y, a[i]);
  }
  for (int i = 0; i < n; i++) {
    cout << y - a[i] << ' ';
  }
  cout << '\n';
    for (int i = 0; i < n; i++) {
    cout << a[i] - x << ' ';
  }
  return 0;
}