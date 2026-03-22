#include <bits/stdc++.h>
using namespace std;
int n, t;
unsigned long long p = 2;
int main() {
  for (cin >> t; t--;) {
    cin >> n;
    p = 2;
    for (int j = n - 1; j > 0; j -= 2) {
      p *= j;
    }
    cout << p << '\n';
    }
  return 0;
}