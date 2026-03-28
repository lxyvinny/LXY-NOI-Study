#include <bits/stdc++.h>
using namespace std;

long long n, k, m, a[21], w[21];
char c;

// P：根据编号找排列（逆康托展开）
void P() {
  cin >> m, m--;   // 转成从0开始编号
  int b[21] = {};  // 标记哪些数已经用过

  // 依次确定第 i 位的数字
  for (int i = 1; i <= n; i++) {
    long long now_ans, t = m / w[n - i], cnt = 0;  // t 表示第几个未使用数
    m %= w[n - i];                                 // 更新剩余排名

    // 在 1~n 中找第 t+1 个未使用的数
    for (int j = 1; j <= n; j++) {
      if (!b[j]) {
        cnt++;  // 当前是第 cnt 个未使用数
      }
      if (cnt == t + 1) {
        now_ans = j;     // 找到目标数
        b[now_ans] = 1;  // 标记已使用
        break;
      }
    }
    cout << now_ans << ' ';  // 输出当前位
  }
  cout << '\n';
}

// Q：根据排列找编号（康托展开）
void Q() {
  long long b[21] = {}, ans = 0;

  // 从后往前读入排列（方便计算阶乘权重）
  for (int i = n; i >= 1; i--) {
    cin >> a[i];

    // 统计比 a[i] 小且未使用的数的个数
    for (int j = 1; j < a[i]; j++) {
      if (b[j] == 0) {
        ans += w[i - 1];  // 每个这样的数贡献 (i-1)。这里是计算 ans 的值，注意：ans 加的是 i - 1 的阶乘。
      }
    }

    b[a[i]] = 1;  // 标记当前数已使用
  }

  cout << ans + 1 << '\n';  // 转回从1开始编号
}

int main() {
  cin >> n >> k;

  w[0] = 1;

  // 预处理阶乘 w[i] = i。这里是来计算阶乘（从 1 到 n）。
  for (int i = 1; i <= n; i++) {
    w[i] += w[i - 1] * i;  // 计算 i!
  }

  // 处理 k 次查询
  for (int i = 0; i < k; i++) {
    cin >> c;
    c == 'P' ? P() : Q();  // 根据操作类型调用对应函数
    // if (c == 'P') {
    //   P();
    // } else {
    //   Q();
    // }
  }

  return 0;
}

/*
P3014解题思路：先读入 n 和 k，再处理位权，依次处理每个查询（ for 或 while ），排列转序号。用两个函数

//p函数有bug的
void P() {
  cin >> m, m--;
  int b[21] = {};
  for (int i = 1; i <= n; i++) {
    long long now_ans, t = m / w[n - i], cnt = 0;
    m %= w[n - i];
    for (int j = 11; j <= n; j++) {
      if (!b[t + 1]) {
        cnt++;
      }
      if (cnt == t + 1) {
        now_ans = j;
        b[now_ans] = 1;
        break;
      }
    }
    cout << now_ans << ' ';
  }
  cout << '\n';
}
*/