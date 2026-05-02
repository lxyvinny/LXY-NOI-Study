#include <bits/stdc++.h>
using namespace std;
int n, t = 1, sum;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) { // 把从1到n的数都枚举出来
    t *= i;                       // 计算阶乘，原理：每次循环，把 t 乘上当前的 i，t 就变成了新的阶乘。
    sum += t; // 把计算号的阶乘累加的 sum 里面。
  }
  cout << sum;
  return 0;
}