#include <bits/stdc++.h>
using namespace std;
long long n, k, m, a[21], w[21], b[21];
char c;
// P：根据编号找排列（逆康托展开）
void P() {
  cin >> m, m--;
  fill(b + 1, b + n + 1, 0);
  // 依次确定第 i 位的数字
  for (int i = 1; i <= n; i++) {
    long long t = m / w[n - i], cnt = 0, now_ans = 0;  // t 表示第几个未使用数，cnt 表示有几个用过的数，now_ans 表示当前位的数值。
    m %= w[n - i];                                     // m 表示当前的位号更行剩余。
    // 在 1 ~ n 中找第 t + 1 个未使用的数
    for (int j = 1; j <= n; j++) {
      if (!b[j]) {
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
// Q：根据排列找编号（康托展开）
void Q() {
  long long ans = 0;
  fill(b + 1, b + n + 1, 0);
  for (int i = n; i >= 1; i--) {
    cin >> a[i];
    for (int j = 1; j < a[i]; j++) {
      if (!b[j]) {
        ans += w[i - 1];  // 这里是来计算位号，w 是阶乘，w[i - 1] 是 a[i] 中的位权。
      }
    }
    b[a[i]] = 1;
  }
  cout << ans + 1 << '\n';
}

int main() {
  cin >> n >> k;
  w[0] = 1;  // 不赋值就为 0
  for (int i = 0; i < n; i++) {
    w[i] += w[i - 1] * i;
  }
  for (int i = 0; i < k; i++) {
    cin >> c;
    c == 'Q' ? Q() : P();
  }
}

// 处理 k 次查询

/*
P3014解题思路：先读入 n 和 k，再处理位权，依次处理每个查询（ for 或 while ），排列转序号。用两个函数
*/