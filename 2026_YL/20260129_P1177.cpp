#include <bits/stdc++.h>
using namespace std;
int n, sz[6];
int main() {
  cin >> n; // 你的 n 个整数到底存在了数组的哪一段下标范围内，请根据这段下标的范围来确定 sort 中边界的偏移量
  for (int i = 1; i <= n; i++) {
    cin >> sz[i];
  }
  sort(sz, sz + n);
  for (int i = 1; i <= n; i++) {
    cout << sz[i];
  }
  return 0;
}