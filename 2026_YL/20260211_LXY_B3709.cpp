#include <bits/stdc++.h>
using namespace std;
int n, p = 1;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    p *= i;
  }
  cout << 2 * (p - n) << ' ' << 2 * (p - 2 * n) << ' ' << 2;
  return 0;
}