#include <bits/stdc++.h>
using namespace std;
long long a, b, c = 1;
int main() {
  cin >> a >> b;
  for (int i = 1; i <= b; i++) {
    c *= a;
    c %= 1000;
  }
  cout << setw(3) << setfill('0') << c;
  return 0;
}