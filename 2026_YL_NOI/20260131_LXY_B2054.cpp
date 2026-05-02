#include <bits/stdc++.h>
using namespace std;
int n, age, s;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> age;
    s += age;
  }
  cout << fixed << setprecision(2) << 1.0 * s / n;
  return 0;
}