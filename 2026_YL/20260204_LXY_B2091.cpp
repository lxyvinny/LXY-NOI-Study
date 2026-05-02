#include <bits/stdc++.h>
using namespace std;
int n, a[1001], b[1001], sum;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i <= n; i++) {
    cin >> b[i];
  }
  for (int i = 1; i <= n; i++) {
    sum += a[i] * b[i]; // 计算数组a的第i个下标乘数组b的第i个下标，并将其累加到sum里面
  }
  cout << sum;
  return 0;
}