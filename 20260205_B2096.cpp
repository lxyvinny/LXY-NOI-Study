#include <bits/stdc++.h>
using namespace std;
int n, Fmax, a, cnt[100001];
// a 表示每个位置（下标）上存了哪个元素（值），cnt 表示每个元素（下标）出现的次数（值）是多少。
int main() {
  cin >> n; // 读入 n。
  for (int i = 0; i <= n - 1; i++) { // 把 0 到 n - 1 的数都枚举出来。
    cin >> a; // 读入 a。
    cnt[a] += 1; // 把 cnt 的第 a 个下标加一。
    Fmax = max(Fmax, a); // 把 a 的最大值赋给 Fmax.
  }
  for (int i = 0; i <= Fmax; i++) { // 循环它的最大值的的次数（把 0 到 Fmax 的所有的次数都枚举出来）。
    cout << cnt[i] << '\n'; // 输出 cnt 的第 i 个位置的值（次数）。
  }
  // int n, m, a[100001], cnt[100001]; // 这里的 cnt 要定义成数组，因为
  // // a 表示每个位置（下标）上存了哪个元素（值），cnt 表示每个元素（下标）出现的次数（值）是多少
  // int main() {
  //   cin >> n;
  //   for (int i = 0; i <= n - 1; i++) {
  //     cin >> a[i];
  //     cnt[a[i]] += 1;
  //     m = max(m, a[i]);
  //   }
  //   for (int i = 0; i <= m; i++) {
  //     cout << cnt[i] << '\n';
  //   }

  // for (int i = 0; i <= m; i++) { // 这里是用值存到数组里，统计数组中出现的次数。
  //   cnt = 0;
  //   for (int j = 0; j <= n - 1; j++) {
  //     cnt += a[j] == i;
  //     // if (a[j] == i) {
  //     //   cnt++;
  //     // }
  //   }
  //   cout << cnt << '\n';
  // }
  return 0;
}
// 作业：a 数组是多余的，去掉