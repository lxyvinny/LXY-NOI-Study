#include <bits/stdc++.h>
using namespace std;
int n, m, x, y, a[20], c;
int main() {
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    cin >> x >> y, x--, y--;
    a[x] |= 1 << y, a[y] |= 1 << x;  // 这里是来记录它们冲突对象
  }
  for (int i = 0; i < 1 << n; i++) {
    int s = 0;
    for (int j = 0; j < n; j++) {
      if (i >> j & 1) {
        s |= a[j];
      }
    }
    c += !(i & s);
  }
  cout << c;
  return 0;
}

/*
// 引入所有常用库（比赛常用写法）
#include <bits/stdc++.h>

// 使用标准命名空间
using namespace std;

// n：材料数量
// m：冲突对数量
// x, y：输入的冲突材料
// a[i]：第 i 个材料和哪些材料冲突（用二进制存）
// cnt：合法披萨数量
int n, m, x, y, a[20], cnt;

int main() {

  // 输入材料数量 n 和冲突数量 m
  cin >> n >> m;

  // 读取每一对冲突关系
  for (int i = 0; i < m; i++) {

    // 输入一对冲突材料，并改成从 0 开始编号
    cin >> x >> y, x--, y--;

    // 让 a[x] 的第 y 位变成 1，表示 x 和 y 冲突
    a[x] |= 1 << y;

    // 同理，y 和 x 也冲突（双向）
    a[y] |= 1 << x;
  }

  // 枚举所有可能的披萨（总共有 2^n 种）
  for (int i = 0; i < 1 << n; i++) {

    // s：当前选的材料，会冲突到哪些材料
    int s = 0;

    // 枚举每一个材料
    for (int j = 0; j < n; j++) {

      // 判断第 j 个材料是否被选中
      // i >> j & 1 == 1 说明选了
      if (i >> j & 1) {

        // 把 j 的所有冲突材料加入 s
        s |= a[j];
      }
    }

    // i & s：
    // 如果不为 0，说明选的材料中出现冲突 → 不合法
    // 如果为 0，说明没有冲突 → 合法

    // !(i & s)：
    // 没冲突 → 1（加到答案）
    // 有冲突 → 0（不加）

    cnt += !(i & s);
  }

  // 输出合法披萨数量
  cout << cnt;

  return 0;
}
*/