#include <bits/stdc++.h>
using namespace std;
int a, b, c, memo[25][25][25], ans;
long long W(int a, int b, int c) {
  if (a <= 0 || b <= 0 || c <= 0) {
    return 1;
  }
  if (a > 20 || b > 20 || c > 20) {
    return W(20, 20, 20);
  }
  if (!memo[a][b][c]) {
    return memo[a][b][c];
  }
  if (a < b && b < c) {
    ans = W(a, b, c - 1) + W(a, b - 1, c - 1) - W(a, b - 1, c);
  } else {
    ans = W(a - 1, b, c) + W(a - 1, b - 1, c) + W(a - 1, b, c - 1) - W(a - 1, b - 1, c - 1);
  }
  memo[a][b][c] = ans;
  return ans;
}
int main() {
  while (1) {
    cin >> a >> b >> c;
    if (a == -1 && b == -1 && c == -1) {
      break;
    }
    cout << "w(" << a << ", " << b << ", " << c << ") = " << W(a, b, c) << '\n';
    return 0;
  }
}