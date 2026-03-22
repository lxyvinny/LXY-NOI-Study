#include <bits/stdc++.h>
using namespace std;
long double x, sum;
int n;
int main() {
  for (cin >> x >> n; n >= 0; n--) {  // 如果n大于等于0循环就执行。
    sum += pow(x, n);                 // pow计算次方的函数，x是底数，n是指数。
  }
  cout << fixed << setprecision(2) << sum;  // 题目说要保留小数点后两位所以用fixed和setprecision(2)来输出sum
  return 0;
}
/*
定义一个for循环用来算多项式，每次n-1，多项式的值保存给sum
*/