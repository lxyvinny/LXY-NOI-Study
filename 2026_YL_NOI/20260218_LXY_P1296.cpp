#include <bits/stdc++.h>
using namespace std;
const int kMaxN = 1e6 + 1;
long long a[kMaxN], n, d, ans;
int main() {
  cin >> n >> d;
  for (int i = 1; i <= n; i++) {
    cin >> a[i]; 
  }
  sort(a, a + n + 1);
  for (int i = 1, j = 1; i <= n; i++) {
    for (; i > 1 && j < i && a[i] - a[j] > d; j++) {
    }
    ans += i - j;
  }
  cout << ans;
  return 0;
}