#include <bits/stdc++.h>
using namespace std;
int n, Gold, Silver, Copper,a=0,b=0,c=0;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> Gold >> Silver >> Copper;
    a += Gold;
    b += Silver;
    c += Copper;
  }
  cout << a << ' ' << b << ' ' << c << ' ' << a + b + c << '\n';
  return 0;
}
