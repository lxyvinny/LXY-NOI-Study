#include <bits/stdc++.h>
using namespace std;
int a, n, sum;
double Mean;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a;
    sum += a, Mean += a;
  }
  cout << fixed << setprecision(5) << sum << ' ' << Mean / n;
  return 0;
}