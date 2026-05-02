#include <bits/stdc++.h>
using namespace std;
int n, F = 1, dF = 1;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    F *= i;
  }
  for (int i = n; i < 0; i -= 2) {
    df = i;
  }
  cout << dF;
  return 0;
}