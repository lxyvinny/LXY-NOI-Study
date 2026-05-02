#include <bits/stdc++.h>
using namespace std;
int n;
float s, x;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> x;
    s += x;
  }
  cout << fixed << setprecision(5) << float(s / n);
  return 0;
}