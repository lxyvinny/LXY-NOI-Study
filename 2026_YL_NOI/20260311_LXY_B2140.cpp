#include <bits/stdc++.h>
using namespace std;
int n, ans1, ans2, b;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int cnt1 = 0, cnt2 = 0;
    for (int j = i; j > 0; j /= 2) {
      cnt1 += j % 2, cnt2 += j % 2 == 0;
    }
    ans1 += cnt1 > cnt2;
    ans2 += cnt1 <= cnt2;
    // ans2 += cnt1 < cnt2; 这里错误的原因是，这里的判断应该写成 cnt1 <= cnt2 因为题目说：数字 1 的个数多于数字 0 的个数的这类二进制数称为 A 类数，否则（1 的个数 <= 0 的个数）就称其为 B 类数。
  }
  cout << ans1 << ' ' << ans2;
  return 0;
}

/*
先写一个从 2 到 n 的循环，在里面写一个十进制转二进制的循环。
再把 1 和 0 出现的次数累加到 cnt1 和 cnt2 里面。
最后判断该二进制数是 A 类数还是 B 类数。
*/