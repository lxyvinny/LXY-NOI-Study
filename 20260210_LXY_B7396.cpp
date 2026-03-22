#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, a;
  cin >> n >> m;
  int money = 0;
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a;
    if (money + a <= m) {
      money += a;
      sum += a;
    }
  }
  int pay = sum * 88 / 100;
  cout << sum - pay;

  return 0;
}