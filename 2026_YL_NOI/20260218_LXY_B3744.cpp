#include <bits/stdc++.h>
using namespace std;
long long n, x, y, s, answer = 1;
int main() {
  cin >> n >> x >> y;
  s = x * (n - 1);
  for (long long i = x; i <= s; i += x) {
    answer += i % y == 0;
  }
  cout << answer;
  return 0;
}