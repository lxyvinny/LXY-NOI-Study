#include <bits/stdc++.h>
using namespace std;
int a, b;
int Gcd(int a, int b) {
  return b > 0 ? Gcd(b, a % b) : a;
}
int main() {
  cin >> a >> b;
  cout << Gcd(a, b);
  return 0;
}