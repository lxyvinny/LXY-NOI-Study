#include <bits/stdc++.h>
using namespace std;
int n;
double a, Mean;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a;
    Mean += a;
  }
  cout << fixed << setprecision(4) << Mean / n;
  return 0;
}