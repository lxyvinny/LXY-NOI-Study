#include <bits/stdc++.h>
using namespace std;
long long a, n, x, ans;// a：当前读入的数n：一共有多少个数，x：前面所有数的累加和，ans：最终答案
int main() {
  cin >> n;  // 输入数的个数
  for (int i = 1; i <= n; i++) {
    cin >> a; // 读入当前第 i 个数
    ans += x * a;    // 用之前所有数的和乘当前数，加入答案，也就是：当前数和之前每一个数都配对一次
    x += a;          // 把当前数加入到前缀和里
  }
  cout << ans;
  return 0;
}