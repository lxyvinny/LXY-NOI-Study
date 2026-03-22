#include <bits/stdc++.h>
using namespace std;
int n, sz[100000];
int main() {
  cin >> n;
  for (int i = 0; i <= n - 1; i++) {
    cin >> sz[i];
  }
  sort(sz, sz + n);
  for (int i = 0; i <= n - 1; i++) {
    cout << sz[i] << ' ';
  }
  return 0;
}