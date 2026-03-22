#include <bits/stdc++.h>
using namespace std;
const int kMaxA = 1e5;  // 定义数组b的最大长度
int n, m, l, r, b[kMaxA + 1];
int main() {
  cin >> n;  // 输入数组长度
  // 输入数组元素，同时构建前缀和数组
  for (int i = 1; i <= n; i++) {
    cin >> b[i];       // 输入第i个元素
    b[i] += b[i - 1];  // 用前缀和公式：b[i] = b[i] + b[i-1]，这样b[i]存的是前i个元素的和
  }
  for (cin >> m; m--;) {
    cin >> l >> r;                    // 输入查询区间的左右下标
    cout << b[r] - b[l - 1] << '\n';  // 输出区间和
  }
  return 0;
}