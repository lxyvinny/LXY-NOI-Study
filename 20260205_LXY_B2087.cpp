#include <bits/stdc++.h>
using namespace std;
int n, g[101], m, cnt;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> g[i];
  }
  cin >> m;
  for (int i = 1; i <= n; i++) {
    cnt += m == g[i];
  }
  cout << cnt;
  return 0;
}