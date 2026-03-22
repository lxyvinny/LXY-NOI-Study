#include <bits/stdc++.h>
using namespace std;
int a, b, c, cnt;
int main() {
  cin >> a >> b >> c;
  for (int i = 0; i <= c; i++) {
    for (int j = 0; j <= c; j++) {
      cnt += a * i + b * j == c;
      // if (a * i + b * j == c) {
      //   cnt++;
      // }
    }
  }
  cout << cnt;
  return 0;
}