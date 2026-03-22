#include <bits/stdc++.h>
using namespace std;
const int kMaxN = 2e5 + 1;
int n;
long long a[kMaxN], c, ans;
int main() {
  cin >> n >> c;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  sort(a, a + n + 1);
  for (int i = 1, jl = 1, jr = 1; i <= n; i++) {
    for (; i > 1 && a[i] - a[jl] > c; jl++) {
    }
    for (; i > 1 && a[i] - a[jr] >= c; jr++) {
    }
    ans += jr - jl;
  }
  cout << ans;
  return 0;
}