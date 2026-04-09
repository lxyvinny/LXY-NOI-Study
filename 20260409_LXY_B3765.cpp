#include <bits/stdc++.h>
using namespace std;
int n, cnt;    // a[i] 表示 i 可以到哪些网页。
bool b[1001];  // 标记是否访问过。
vector<int> a[1001];
int main() {
  cin >> n;
  // 读入图
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


// 读入图
// 第0步：在1号网页
// 第1步：从1出发
// 第2步：从第1步到达的所有点继续走
