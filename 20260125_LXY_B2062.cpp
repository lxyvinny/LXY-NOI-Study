#include <bits/stdc++.h>
using namespace std;
int a, n, s = 1;
int main() {
  cin >> a >> n;
  for (int i = 1; i <= n; i++) {
    s *= a;
  }
  cout << s;
  return 0;
}