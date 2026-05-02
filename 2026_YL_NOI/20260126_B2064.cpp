#include <bits/stdc++.h>
using namespace std;
int a, n;
int main() {
  for (cin >> n; n--;) {
    cin >> a;
    if (a <= 2) {
      cout << "1\n";
    } else {
      int x = 1, y = 1, z;
      for (int i = 1; i <= a - 2; i++) {
        z = x + y, x = y, y = z;
      }
      cout << z << '\n';
    }
  }
  return 0;
}