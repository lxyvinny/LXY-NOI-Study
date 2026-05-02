#include <bits/stdc++.h>
using namespace std;
int n, k, a = 1, b = 9, cnt[10];
int main() {
  cin >> n >> k;
  a = pow(10, n - 1);
  for (int i = 1; i < n; i++) {
    b *= 10;
    b += 9;
  }
  for (int i = a; i <= b; i++) {
    cnt[i % k]++;
  }
  for (int i = 0; i < k; i++) {
    cout << cnt[i] << ' ';
  }
  return 0;
}