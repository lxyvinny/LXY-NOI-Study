#include <bits/stdc++.h>
using namespace std;
int n, m, sum;
int main() {
  cin >> n >> m;
  for (int i = n + !(n % 2); i <= m - !(m % 2); i += 2) {
    sum += i;
  }
  cout << sum;
  return 0;
}