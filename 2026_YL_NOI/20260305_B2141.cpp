#include <bits/stdc++.h>
using namespace std;
long long p, q, r, pp, qq, rr, b;
long long Check(long long x) {
  long long s = 0, t = 1;
  for (; x > 0; x /= 10) {
    int d = x % 10;
    if (d >= b) { // 判断 d 是否 >= b
      return -1;
    }
    s += d * t;
    t *= b;
  }
  return s;
} 
int main() {
  cin >> p >> q >> r;
  for (b = 2; b <= 16; b++) {
    pp = Check(p), qq = Check(q), rr = Check(r);
    if (pp == -1 || qq == -1 || rr == -1) {
      continue;
    }
    if (pp * qq == rr) {
      cout << b;
      return 0;
    }
  }
  cout << 0;
}
// 位置累加法，计算值
// 3 个数字当字符串
// 枚举进制，判断数值是否相等
// 函数：字符串、整数
// 6 9 42，在13进制下 6 x 9 = 42
// 把字符串转换成数值，并判断不同进制下是否相等