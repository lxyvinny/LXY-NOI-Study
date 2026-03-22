#include <bits/stdc++.h>
using namespace std;

const int kMaxN = 1e5 + 7;
long long v, q, op[kMaxN], idx[kMaxN], a[50], len;

int main() {
  cin >> v >> q;
  for (int i = 0; i < q; i++) {
    cin >> op[i] >> idx[i];
  }

  if (v == 0) {
    a[0] = 0;
  } else {
    long long t = v;  // 这里的 t 要用 long long 因为 int 存不下 19 位数
    for (int i = 0; t > 0; i++) {
      a[i] = t % 3;
      t /= 3;
    }
  }

  for (int i = 0; i < q; i++) {
    long long type = op[i];
    long long pos = idx[i];  // 当前操作的是第 pos 位
    if (type == 1) {
      a[pos] = (a[pos] + 1) % 3;  // 这里的下标是 pos, 因为 pos 表示当前操作的是第几位
    } else if (type == 2) {
      a[pos] = (a[pos] + 2) % 3;
    } else if (type == 3) {
      if (a[pos] == 1) {
        a[pos] = 2;
      } else if (a[pos] == 2) {
        a[pos] = 1;
      }
    }

    long long ans = 0;  // 这里的 ans 要用 long long 因为题目说 任意获取到的答案不超过 2×10^18。
    for (int j = 36; j >= 0; j--) {
      ans = ans * 3 + a[j];
    }
    cout << ans << '\n';
  }
  return 0;
}

// 老师的标程
// #include <bits/stdc++.h>

// using namespace std;

// const int kL = 50;

// long long w[kL] = {1}, v, q;

// int main() {
//   for (int i = 1; i < kL; i++) {
//     w[i] = w[i - 1] * 3;
//   }
//   cin >> v >> q;
//   for (int o, i, x, y; q--;) {
//     cin >> o >> i;
//     x = v / w[i] % 3;
//     if (o == 1) {
//       y = (x + 1) % 3;
//     } else if (o == 2) {
//       y = (x + 2) % 3;
//     } else {
//       y = (3 - x) % 3;
//     }
//     v += (y - x) * w[i];
//     cout << v << '\n';
//   }
//   return 0;
// }

// 