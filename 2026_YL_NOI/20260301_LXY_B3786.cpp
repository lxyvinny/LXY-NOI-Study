#include <bits/stdc++.h>
using namespace std;
int a, b, ans = 0;
int main() {
  cin >> a >> b;
  for (int i = a; i <= b; i++) {
    int p = i, sum1 = 0, sum2 = 0, t = 0;
    for (; p > 0;) {
      if (t == 0) {
        sum1 += p % 10;
        t = 1;
      } else {
        sum2 += p % 10;
        t = 0;
      }
      p /= 10;
    }
    ans += sum1 == sum2;
  }
  cout << ans;
}