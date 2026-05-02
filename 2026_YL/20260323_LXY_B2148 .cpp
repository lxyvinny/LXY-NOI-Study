#include <bits/stdc++.h>
using namespace std;

double x;
int n;

// 递归函数 f，用于计算嵌套分数中的 g(n)
// 参数：x 表示分子实数，n 表示当前层数
double f(double x, int n) {
  // 递归终止条件：当 n = 1 时，最内层的值为 1 + x
  if (n == 1) {
    return 1 + x;  // 返回最内层嵌套分数的值
  }
  // 递归计算 g(n) = n + x / g(n-1)
  return n + x / f(x, n - 1);  // 调用自身计算下一层，并返回当前层值
}

int main() {
  cin >> x >> n;

  // 调用递归函数计算嵌套分数 g(n)，再计算 f(x,n) = x / g(n)
  double ans = x / f(x, n);

  cout << fixed << setprecision(2) << ans;

  return 0;
}