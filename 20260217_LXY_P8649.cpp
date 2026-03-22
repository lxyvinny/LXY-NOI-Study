#include <bits/stdc++.h>
using namespace std;
const int kMaxN = 1e5 + 1;
int n, k;
long long c[kMaxN], answer;
int main() {
  cin >> n >> k;
  c[0] = 1;
  for (int i = 1, x, sum = 0; i <= n; i++) {
    cin >> x;
    sum = (sum + x) % k;
    c[sum]++;
  }
  for (int i = 0; i < k; i++) {
    answer += c[i] * (c[i] - 1) / 2;
  }
  cout << answer;
  return 0;
}