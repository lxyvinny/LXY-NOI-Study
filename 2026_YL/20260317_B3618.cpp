#include <bits/stdc++.h>
using namespace std;
long long n, k, a[21], max_ans;
int main() {
  cin >> n >> k;
  for (int i = 0, c; i < n; i++) {    // i 表示当前的人的编号。
    cin >> c;                         // 读入 c，表示当前人的能力数量。
    for (int j = 0, x; j < c; j++) {  // j 表示当前那个人的能力的编号。
      cin >> x;                       // 读入 x，表示当前那个人的能力的值。
      a[i] |= 1LL << k - x;           // 1LL 是 1 的长整形（long long）字面量。
    }
  }
  // 这里是来算出计划的成功率最大得分。
  for (int i = 0; i < 1 << n; i++) {
    long long s = 0;
    for (int j = 0; j < n; j++) {
      if (i >> j & 1) {  // 如果 i >> j & 1 等于一（如果 i 的 j 号位是否为集合）。
        s ^= a[j];       // s 异或并赋值 a[j]。
      }
    }
    max_ans = max(max_ans, s);  // 取 max_ans 和 s 之间的最大值。
  }
  cout << max_ans;  // 输出最大答案（max_ans）。
  return 0;
}