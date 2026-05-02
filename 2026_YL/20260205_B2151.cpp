#include <bits/stdc++.h>
using namespace std;
int n, dy, sy, t, c;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> dy >> sy;                                      // 读入 dy 和 sy。
    if (dy >= 90 && dy <= 140 && sy >= 60 && sy <= 90) {  // 判断 dy 和 sy 在不在正常的数值范围内。
      c++;                                                // 如果在 c 就更新。
    } else {
      c = 0;  // 否则， c 为 0。
    }
    t = max(c, t);  // 找 c 和 t 的最大值。
  }
  cout << t;
  return 0;
}
// 作业：改成三目