#include <bits/stdc++.h>
using namespace std;
const int kMaxN = 3 * 1e3 + 1;
int a[kMaxN], x, y, c;
int main() {
  cin >> x >> y;
  a[1899] = 6;
  for (int i = 1900; i <= y; i++) {
    a[i] = (a[i - 1] + 1 + (i % 400 == 0 || i % 100 && i % 4 == 0)) % 7;
    c += (i >= x) && (a[i] == 6 || a[i] == 0);
  }
  cout << c;
  return 0;
}