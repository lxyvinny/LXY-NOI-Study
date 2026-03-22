#include <bits/stdc++.h>
using namespace std;
long long n, a, b, x, y, fa, maxf, s1, s2, m, mm, ans, f, cnt;
int main() {
  cin >> n >> x >> y >> a >> b;
  for (int i = 1; i <= n; i++) {
    cin >> s1 >> s2 >> m;
    mm = m - s1 * x - s2 * y;
    ans += mm + (mm + 1) / 2 * (mm > s1 * x + s2 * y);
    if (!!mm == f) {
      cnt++;
    } else {
      f = !f;
      cnt = 1;
    }
    if (f & cnt >= a) {
      ans *= 2;
    }
    if (!f && cnt >= b) {
      ans /= 2;
    }
    maxf = max(maxf, ans);
  }
  cout << maxf << ' ' << ans;
  return 0;
}