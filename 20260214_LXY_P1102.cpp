#include <bits/stdc++.h>
using namespace std;
const int N = 200009;
long long n, c, a[N], ans;
int main() {
  cin >> n >> c;
  for (ll i = 1; i <= n; i++) cin >> a[i], cnt[a[i]]++;
  for (ll i = 1; i <= n; i++) ans += cnt[a[i] + c];
  cout << ans << endl;
  return 0;
}