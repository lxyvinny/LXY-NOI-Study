#include <bits/stdc++.h>
using namespace std;
long long n;
string a, ans;
bool Check() {
  int t = 0;
  if (a.size() == 1) {
    t = a[0] - '0';
  } else {
    t = (a[a.size() - 1] - '0') + (a[a.size() - 2] - '0') * 10;
  }
  if (!(t % 4)) {
    return 1;
  }
  for (int l = 0; l < a.size(); l++) {
    for (int r = l; r < a.size(); r++) {
      ans = "";
      for (int num = 0; num < a.size(); num++) {
        if (num < l || num > r) {
          ans += a[num];
        }
      }
      if (ans.size() > 0) {
        if (ans.size() == 1) {
          t = ans[ans.size() - 1] - '0';
        } else if (ans.size() >= 2) {
          t = (ans[ans.size() - 1] - '0') + (ans[ans.size() - 2] - '0') * 10;
        }
        if (!(t % 4)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

int main() {
  for (cin >> n; n--;) {
    cin >> a;
    cout << (Check() ? "Yes" : "No") << '\n';
  }
  return 0;
}