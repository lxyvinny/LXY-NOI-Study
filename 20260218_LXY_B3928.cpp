#include <bits/stdc++.h>
using namespace std;
const int kMaxN = 5e4 + 1;
int u1[kMaxN], u2[kMaxN], n, cnt;
int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> u1[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> u2[i];
  }
  sort(u1, u1 + n);
  sort(u2, u2 + n);
  for (int j = 0; j <= n; j++) {
    cnt += u1[j] > u2[cnt];
  }
  cout << cnt;
  return 0;
}