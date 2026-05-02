#include <bits/stdc++.h>
using namespace std;
int a, b, ans;
bool Check1(int n, int k) {
  for (;n > 0; n /= k) {
    if (n % k == 0) {
      return 0;
    }
  }
  return 1;
}
bool Check2(int n) {
  if (!Check1(n, 5)) {
    return 0;
  }
  if (!Check1(n, 7)) {
    return 0;
  }
  if (!Check1(n, 9)) {
    return 0;
  }
  return 1;
}
int main() {
  cin >> a >> b;
  for (int i = a; i <= b; i++) {
    ans += Check2(i);
  }
  cout << ans;
  return 0;
}