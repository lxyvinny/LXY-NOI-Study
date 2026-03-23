#include <bits/stdc++.h>
using namespace std;
int m, n;
int A(int m, int n) {
  if (!m) {
    return n + 1;
  } else if (!n) {
    return A(m - 1, 1);
  } else {
    return A(m - 1, A(m, n - 1));
  }
}
int main() {
  cin >> m >> n;
  cout << A(m, n);
  return 0;
}