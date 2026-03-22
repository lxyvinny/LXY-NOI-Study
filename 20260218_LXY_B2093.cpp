#include <bits/stdc++.h>
using namespace std;
int n, a[10000], x;
int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> x;
  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      cout << i;
      break;
    } else if (a[i] != x && i == n - 1) {
      cout << -1;
    }
  }
  return 0;
}