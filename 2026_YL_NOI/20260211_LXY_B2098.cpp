#include <bits/stdc++.h>
int n, t;
bool Recordvar[1000000];
using namespace std;
int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> t;
    if (Recordvar[t] == 0) {  // 判断这个数是否输出过，如果没输出过，就输出 t 然后把这个数标记成输出过的。
      cout << t << ' ';
      Recordvar[t] = !Recordvar[t];
    }
  }
  return 0;
}