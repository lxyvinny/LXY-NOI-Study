#include <bits/stdc++.h>
using namespace std;
const int kL = 1e5;
int n, a[kL], b[kL];
int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < n; i++) {
    cout << b[a[i] - 1] << ' ';
  }
  return 0;
}