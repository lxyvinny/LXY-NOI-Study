#include <bits/stdc++.h>
using namespace std;
int a, b, m;
int main() {
  cin >> a >> b;
  for (int i = 1; i <= b; i++) {
    m *= a;
  }
  cout << set size(3) << setfill('0') << m % 1000;
  return 0;
}