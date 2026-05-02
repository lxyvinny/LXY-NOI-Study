#include <bits/stdc++.h>
using namespace std;
int a, n;
int main() {
  for (cin >> n; n > 0; n /= 10) {
    a = n % 10;
    cout << a << ' ';
  }
  return 0;
}