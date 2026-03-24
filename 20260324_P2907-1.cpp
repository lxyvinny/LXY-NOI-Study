#include <bits/stdc++.h>
using namespace std;
int n, k, ans;
void fen(int n) {
  if ((n - k) % 2 || n - k <= 0) {  // (n - k) 必须大于 0，且 (n - k) 必须是偶数（能被 2 整除），才能递归。注意：这里是 <= 因为 k == n 的话，分的有一部分是 0 就等于没分。
    ans++;
  } else {
    fen((n + k) / 2);  // 这里是来算牛群数量比较多的数量
    fen((n - k) / 2);  // 这里是来算牛群数量比较少的数量
  }
}
int main() {
  cin >> n >> k;
  fen(n);
  cout << ans;
  return 0;
}