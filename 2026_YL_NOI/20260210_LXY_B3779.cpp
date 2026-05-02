#include <bits/stdc++.h>
using namespace std;
long long n, x, a, sum;
int main() {
  cin >> n >> x;
  for (int i = 1; i <= n; i++) {
    cin >> a;
    sum += x + a;
  }
  cout << sum;
  return 0;
}