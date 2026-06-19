#include <bits/stdc++.h>
using namespace std;
int n;
double ans1, ans2;
int main() {
  cin >> n;
  ans1 = ans2 = n;
  for (int i = 1; i <= 9; i++) {
    ans1 /= 2;
    ans2 += ans1 * 2;
  }
  cout << ans2 << '\n'
       << ans1 / 2;
  return 0;
}