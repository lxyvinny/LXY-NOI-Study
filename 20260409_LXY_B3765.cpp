#include <bits/stdc++.h>
using namespace std;
int n, cnt, b[1001];  // a[i] 表示 i 可以到哪些网页, b 标记是否访问过。
vector<int> a[1001];
int main() {
  cin >> n;
  b[1] = 1;
  // 读入图
  for (int i = 1; i <= n; i++) {
    int t;
    cin >> t;
    for (; t--;) {
      int x;
      cin >> x;
      a[i].push_back(x);
    }
  }
  vector<int> t;
  for (int x : a[1]) {
    b[x] = 1;
    t.push_back(x);
  }
  for (int dj1 : t) {
    for (int dj2 : a[dj1]) {
      b[dj2] = 1;
    }
  }
  for (int i = 1; i <= n; i++) {
    cnt += b[i];
  }
  cout << cnt;
  return 0;
}

// 读入图
// 第0步：在1号网页
// 第1步：从1出发
// 第2步：从第1步到达的所有点继续走