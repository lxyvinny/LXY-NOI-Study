#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, e;
int main() {
  cin >> a >> b >> c >> d;
  e = (c * 60 + d) - (a * 60 + b);
  cout << e / 60 << " " << e % 60;
  return 0;
}