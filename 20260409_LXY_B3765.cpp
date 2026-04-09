#include <bits/stdc++.h>
using namespace std;
int n, a[1001], cnt;  // a[i] 表示 i 可以到哪些网页。
bool b[1001];         // 标记是否访问过。
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int t;
    cin >> t;
    for (int j = 0; j < t; j++) {
      int x;
      cin >> x;
      a[i].push_back(x);
    }
  }
  return 0;
}