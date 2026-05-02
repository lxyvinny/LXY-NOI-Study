#include <bits/stdc++.h>
using namespace std;
int n;
long long sum;  // 这里的要 sum 要定义成 long long 因为题目说了1 + 2 + 3 + ⋯ + 10000000 的值超出了 int 类型可以存储的最大值。
int main() {
  cin >> n;                       // 读入 n
  for (int i = 1; i <= n; i++) {  // 循环 n 次
    sum += i;                     // 这题要求的是从 1 到 i 的累加和，所以 sum 要累加并赋值 i，而且 sum 不用更新，因为这题要把每次的了累加的结果都输出。
    cout << sum << '\n';
  }
  return 0;
}