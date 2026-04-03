#include <bits/stdc++.h>
using namespace std;
long long n, ans;
string a;
bool Check() {
  ans = 0;
  for (int l = 0; l < a.size(); l++) {
    for (int r = l; r < a.size(); r++) {
      for (int num = 0; num < a.size(); num++, ans *= 10) {
        if (num < l || num > r) {
          ans += a[num] - '0';
        }
      }
      ans /= 10;
      if (ans % 4) {
        return 1;
      }
    }
  }
  return 0;
}
int main() {
  cin >> n;
  for (; n--;) {
    cin >> a;
    cout << (Check() ? "No" : "Yes") << '\n';
  }
  return 0;
}