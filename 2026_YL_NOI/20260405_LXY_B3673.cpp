#include <bits/stdc++.h>
using namespace std;
const int kL = 1e6;
long long n, a[kL], r[kL], c, t;
int main() {
  cin >> n >> c;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> r[i];
  }
  for (int i = 0; i < n; i++) {
    t += abs(a[i] - r[i]) * (a[i] < r[i]);
  }
  cout << c * t;
  return 0;
}