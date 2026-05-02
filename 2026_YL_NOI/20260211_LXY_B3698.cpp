#include <bits/stdc++.h>
using namespace std;
int k, n, b, answer;
int main() {
  cin >> n >> k >> b;
  for (int i = 1, x = 0, y = 0; i <= n; i++) {
    cin >> x >> y;
    answer += k * x + b == y;
  }
  cout << answer;
  return 0;
}