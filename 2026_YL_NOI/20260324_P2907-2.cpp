#include <bits/stdc++.h>
using namespace std;
int n, k;
int fen(int n) {  // 函数的功能是，计算 n 会被分解成多少个“不可分的个体”。
  // (n - k) 必须大于 0，且 (n - k) 必须是偶数（能被 2 整除），才能递归。
  return (n - k) % 2 || n - k <= 0;  // 注意：这里是 <= 因为 k == n 的话，分的有一部分是 0 就等于没分。
  if ((n - k) % 2 || n - k <= 0) {
    return fen((n + k) / 2) + fen((n - k) / 2);  // 这里是来算牛群数量比的总数量。
  }
}
int main() {
  cin >> n >> k;
  cout << fen(n);
  return 0;
}