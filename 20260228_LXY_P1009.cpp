#include <bits/stdc++.h>
using namespace std;
const int kMaxN = 100;
int a[kMaxN], b[kMaxN] = {1}, n;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < kMaxN; j++) {
      a[j] += b[j] *= i; // 计算阶乘之和，注意：这里不是 a[j] += b[j] * i;，而是 a[j] += b[j] *= i;，因为这里是计算“阶乘之和”，不是计算“阶乘”。
    }
    for (int j = 0; j < kMaxN - 1; j++) { // 进位处理，注意：这个进位要写在计算“阶乘循环”的里面，因为每次都要，不然就会爆 int。
      a[j + 1] += a[j] / 10, a[j] %= 10;
      b[j + 1] += b[j] / 10, b[j] %= 10;
    }
  }
  int i = kMaxN - 1;
  for (; !a[i]; i--) {
  }
  for (; i >= 0; i--) {
    cout << a[i];
  }
  return 0;
}