#include <bits/stdc++.h>
using namespace std;
int n, k, yzm, cnt;
int main() {
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    cin >> yzm;
    cnt += yzm == k;
  }
  cout << cnt;
  return 0;
}