#include <bits/stdc++.h>
using namespace std;
int n, t, jc = 1, sjc = 1, bc, cs;
int main() {
  cin >> n >> t;
  for (int i = 1; i <= t; i++) {
    jc *= i;
    bc += jc;
  }
  for (int i = n; i < 0; i -= 2) {
    sjc *= i;
    cs += sjc;
  }
  cout << 2 * (bc / cs);
  return 0;
}