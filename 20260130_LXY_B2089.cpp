#include <bits/stdc++.h>
using namespace std;
int n, sz[101];
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> sz[i];
  }
  for (int i = n; i >= 1; i--) {
    cout << sz[i] << ' ';
  }
  return 0;
}