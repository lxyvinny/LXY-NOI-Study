#include <bits/stdc++.h>
using namespace std;
int x[101], n, maxf, ans;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> x[i];
    maxf = max(maxf, x[i]);
  }
  for (int i = 1; i <= n; i++) {
    ans += x[i] * (x[i] != maxf);
  }
  cout << ans;
  return 0;
}