#include <bits/stdc++.h>
using namespace std;
int n, k, a[100000001];  // 这里的数组 a 的长度要开的够大，如果 a 的长度要开的不够大的程序就会 RE。
long long sum;           // 这里的 sum 要定义成 long long 因为 a 可是有一亿啊。
int main() {
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i <= n; i++) {
    if (i == k) {   // 判断现在循环到没到第 k 次。
      sum -= a[i];  // 如果到了 a 的第 i 个数字元素 就要变成负的 a 的第 i 个数字元素并加并赋值给 sum。
    } else {        // 否则
      sum += a[i];  // sum 就加并赋值 a 的第 i 个数字元素。
    }
  }
  cout << sum;
  return 0;
}