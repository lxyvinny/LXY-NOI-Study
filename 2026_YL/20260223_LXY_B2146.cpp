#include <bits/stdc++.h>
using namespace std;
int n, x;
long long H(int n, int x) {
  if (n == 0) {
    return 1;
  }
  if (n == 1) {
    return 2 * x;
  }
  return 2 * x * H(n - 1, x) - 2 * (n - 1) * H(n - 2, x);
}

int main() {
  cin >> n >> x;
  cout << H(n, x);
  return 0;
}