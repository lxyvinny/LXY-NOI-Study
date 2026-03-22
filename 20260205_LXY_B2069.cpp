#include <bits/stdc++.h>
using namespace std;
int Fmax, n, a, cnt[100001];  // a 表示每个位置（下标）上存了哪个元素（值），cnt 表示每个元素（下标）出现的次数（值）是多少。
int main() {
  cin >> n;                           // 读入 n。
  for (int i = 0; i <= n - 1; i++) {  // 把 0 到 n - 1 的数都枚举出来。
    cin >> a;                         // 读入 a。
    cnt[a] += 1;                      // 把 cnt 的第 a 个下标加一。
    Fmax = max(Fmax, a);              // 把 a 的最大值赋给 Fmax。
  }
  for (int i = 0; i <= Fmax; i++) {  // 循环它的最大值的的次数（把 0 到 Fmax 的所有的次数都枚举出来）。
    cout << cnt[i] << '\n';          // 输出 cnt 的第 i 个位置的值（次数）。
  }
  return 0;
}