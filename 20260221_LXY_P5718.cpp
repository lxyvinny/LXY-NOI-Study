#include <bits/stdc++.h>
using namespace std;
int n, x = 1e3, y;
int main() {
  for (cin >> n; n--;) {
    cin >> y;
    x = min(x, y);
  }
  cout << x;
  return 0;
}