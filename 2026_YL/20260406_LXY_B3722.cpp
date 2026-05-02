#include <bits/stdc++.h>
using namespace std;
const int kL = 1e5;
long long n, a[kL], b[kL], suma, sumb, cnt;
int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < n; i++) {
    suma += a[i], sumb += b[i];
    if (suma < sumb) {
      cout << i + 1;
      break;
    }
  }
  return 0;
}