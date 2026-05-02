#include <bits/stdc++.h>
using namespace std;
int a;
int main() {
  cin >> a;
  cout << (a % 2 == 0 && a > 4 && a < 12) << ' ' << (a % 2 == 0 || a > 4 && a < 12) << ' ' << (a % 2 == 0 && a < 4 || a > 12 || a % 2 == 1 || a > 4 && a < 12) << ' ' << (a % 2 == 1 && a < 4 && a > 12);
  return 0;
}