#include <bits/stdc++.h>
using namespace std;
double t = 1.0, e;
int n;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    t *= i;      // 这个表达式的含义是，假设i=2， t = 1 * 2 = 2，即2的阶乘。每次循环，把 t 乘上当前的 i，t 就变成了新的阶乘。
    e += 1 / t;  // 当一次的阶乘出来后，用1除以阶乘，并将所有1除以阶乘的值累加加到e里面。
  }
  cout << fixed << setprecision(10) << e + 1;
  return 0;
}
/*
用double来存n
定义一个for循环用来算阶乘，每次i加1，阶乘的值保存给t
再定义一个for循环用来算e（上述最后的代码表明不需要再定义这个for循环）。
最后在输出的时候要设置精度
*/