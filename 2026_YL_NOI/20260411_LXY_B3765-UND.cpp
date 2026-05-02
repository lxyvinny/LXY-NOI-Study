#include <bits/stdc++.h>
using namespace std;
const int kL = 1e3 + 1;
int n, b[kL], cnt;  // b 数组表示网页能不能去。
vector<int> a[kL];
int main() {
  cin >> n;
  b[1] = 1; // 这里的 b[1] = 1 是因为没有点击的时候“网页 1” 已经“打开了”。
  for (int i = 1; i <= n; i++) {
    int t;
    cin >> t;
    for (int j = 0; j < t; j++) {
      int x;
      cin >> x;
      a[i].push_back(x);
    }
  }
  vector<int> t;
  for (int i : a[1]) {
    b[i] = 1;
    t.push_back(i);
  }
  for (int x : t) {
    for (int y : a[x]) {
      b[y] = 1;
    }
  }
  for (int i = 1; i <= n; i++) {
    cnt += b[i];
  }
  cout << cnt;
  return 0;
}