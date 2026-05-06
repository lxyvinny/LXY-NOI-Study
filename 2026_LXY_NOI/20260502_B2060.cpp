#include <bits/stdc++.h>
using namespace std;
int m, n, sum;
int main() {
  cin >> m >> n;
  for (int i = m % 17 == 0 ? m : m + 17 - m % 17; i <= n; i += 17) {
    sum += i;
  }
  cout << sum;
  return 0;
}