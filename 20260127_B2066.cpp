#include <bits/stdc++.h>
using namespace std;
int n;
double x, y, z, rt;
int main() {
  
  for (cin >> n;n--;) {
    cin >> x >> y >> rt;
    z += sqrt(x * x + y * y) / 50 * 2 + 1.5 * rt;
  }
  cout << int(ceil(z));
  return 0;
}