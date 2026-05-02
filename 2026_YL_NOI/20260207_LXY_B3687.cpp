#include <bits/stdc++.h>
using namespace std;
int n, t;
int main() {
  cin >> n;
  for (int i = 1; t <= n; i++, t += i) {
    cout << i << '\n';
  }
  return 0;
}