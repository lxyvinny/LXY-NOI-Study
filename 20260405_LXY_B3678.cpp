#include <bits/stdc++.h>
using namespace std;
const int kL = 1e5;
long long n, sjz, a[kL], b[kL], cnt;
int main() {
  cin >> n >> sjz;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < n; i++) {
    cnt += a[i] <= sjz;
    sjz += (a[i] <= sjz) * b[i];
  }
  cout << cnt;
  return 0;
}