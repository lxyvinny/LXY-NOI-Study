#include <bits/stdc++.h>
using namespace std;
int a, b, c, x;
int main() {
  cin >> a >> b >> c;
  for (x = 2; a % x != b % x || b % x != c % x; x++) {
  }
  cout << x;
  return 0;
}