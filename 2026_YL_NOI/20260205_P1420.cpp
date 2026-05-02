#include <bits/stdc++.h>
using namespace std;
int n, a[100001], t, c; // 这里的
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    if (a[i - 1] + 1 == a[i]) {
      c++;
    } else {
      c = 1;
    }
    t = max(c, t);
  }
  cout << t;
  return 0;
}

// 任何时候访问数组，养成检查下标是否越界的习惯
// 必须 i > 1 才能够跟上一个元素比，所以这里逻辑有漏洞
// 正确的原因是，初始时 c 的长度是 0，所以就算跟 a[0] 连上了，长度增加 1 的结果还是 1