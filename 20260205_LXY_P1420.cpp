#include <bits/stdc++.h>
using namespace std;
int n, a[100001], t, c;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) { // 读入 n 次 a，并且判断 a 是否为连号。
    cin >> a[i]; // 读入 a
    if (a[i - 1] + 1 == a[i]) {  // 判断 a 是否为连号。
      c++;                       // 如果输入的 a 是连号，计数器就加一。
    } else {
      c = 1;  // 如果现在输入的 a 不是连号，计数器就更新为 1。
    }
    t = max(c, t);  // 找 c 和 t 的最大值。
  }
  cout << t;
  return 0;
}