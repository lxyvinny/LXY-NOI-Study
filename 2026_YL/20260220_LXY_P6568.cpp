#include <bits/stdc++.h>
using namespace std;
const int kMaxN = 1e6;
int n, len ,A[kMaxN];
long long k, sum, ans;
int main() {
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  len = min((long long)n, k + 1);
  for (int i = 0; i < len; i++) {
    sum += A[i];
  }
  ans = sum;
  for (int i = len; i < n; i++) {
    sum += A[i];
    sum -= A[i - len];
    ans = max(ans, sum);
  }
  cout << ans;
  return 0;
}