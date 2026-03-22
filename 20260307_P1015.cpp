#include <bits/stdc++.h>
using namespace std;
int n, a[1000], b[1000], len, cnt;
string s;
bool Check() {
  for (int i = 0; i < len / 2; i++) {
    if (a[i] != a[len - 1 - i]) {
      return 0;
    }
  }
  return 1;
}
int main() {
  cin >> n >> s;
  len = s.size();
  for (int i = 0; i < len; i++) {
    s[len - 1 - i] <= '9' ? a[i] = s[len - 1 - i] - '0' : a[i] = s[len - 1 - i] - 'A' + 10;
  }
  for (; cnt <= 30;) {
    if (Check()) {
      cout << "STEP=" << cnt;
      return 0;
    }
    for (int i = 0; i < len; i++) {
      b[i] = a[len - 1 - i];
    }
    for (int i = 0; i < len; i++) {
      a[i] += b[i];
    }
    for (int i = 0; i < len; i++) {
      if (a[i] >= n) {
        a[i + 1] += a[i] / n;
        a[i] %= n;
      }
    }
    len += a[len];
    cnt++;
  }
  cout << "Impossible!";
  return 0;
}