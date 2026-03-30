#include <bits/stdc++.h>
using namespace std;
int n, a, b[2][10000], t[2];
int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    b[a % 2][t[a % 2]++] = a;
  }
  for (int i = 1; i >= 0; i--) {
    for (int j = 0; j < t[i]; j++) {
      cout << b[i][j] << ' ';
    }
    cout << '\n';
  }
  return 0;
}