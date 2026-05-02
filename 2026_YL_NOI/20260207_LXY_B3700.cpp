#include <bits/stdc++.h>
using namespace std;
long long n, cj;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cj = pow(i, j);
      cout
          << i << " ^ " << j << " = " << cj << ' ';
    }
    cout << '\n';
  }
  return 0;
}