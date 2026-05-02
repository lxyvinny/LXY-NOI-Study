#include <bits/stdc++.h>
using namespace std;
int k, z;
int main() {
  int a = 0, b = 0, c = -1;
  cin >> k;
  for (int i = 1; i <= k; i++) {
    cin >> z;
    z == 1 ? a++ : (z == 5) ? b++
                            : c++;
  }
  cout << a << '\n'
       << b << '\n'
       << c;
  return 0;
}