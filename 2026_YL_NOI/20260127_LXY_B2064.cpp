#include <bits/stdc++.h>
using namespace std;
long long n, a;
int main() {
  for (cin >> n; n--;) {
    cin >> a;
    int x = 1, y = 1, z;
    for (int i = 1; i <= a - 2; i++) {
      z = x + y, x = y, y = z;
    }
    cout << y << '\n';
  }
  return 0;
}