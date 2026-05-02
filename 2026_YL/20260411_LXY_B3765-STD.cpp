#include <bits/stdc++.h>
using namespace std;
const int kL = 1e3 + 1;
int n, b[kL];
vector<int> a[kL];
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int t;
    for (cin >> t; t--;) {
      int x;
      cin >> x;
      a[i].push_back(x);
    }
  }
  for (int x : a[1]) {
    for (int y : a[x]) {
      b[x] = b[y] = 1;
    }
  }
  cout << accumulate(b + 2, b + n + 1, 0) + 1;
  return 0;
}