#include <bits/stdc++.h>
using namespace std;
int n, ans;
string s, mx;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> s;
    // 判断当上总统的人的号数和当上总统的人的票数，并更新最大答案。
    if (s.size() > mx.size() || (s.size() == mx.size() && s > mx)) {
      mx = s;
      ans = i;
    }
  }
  cout << ans << '\n' << mx << '\n';
}