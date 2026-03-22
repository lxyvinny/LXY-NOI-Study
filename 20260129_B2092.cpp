#include <bits/stdc++.h>
using namespace std;
int n, s[5001];  // n 表示灯的数量，s 表示所有灯的开关状态。全局数组在程序开始时，所有元素都会自动变成 0
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {    // 枚举操作人的编号。用 i 表示操作人的编号，从 1 开始，不超过 n 就执行，每次编号增加1
    for (int j = 1; j <= n; j++) {  // 枚举灯的编号即 i 的倍数。用 j 表示灯的编号，从 i 开始，不超过 n 就执行，每次编号增加 i
      if (j % i == 0) {
        s[j] = !s[j];  // 让编号为 j 的灯的开关状态取反
      }
    }
  }
  for (int i = 1; i <= n; i++) {  // 枚举灯的状态。循环判断s的第i号灯的是否为关。输出i
    if (s[i]) {
      cout << i << ' ';
    }
  }
  return 0;
}