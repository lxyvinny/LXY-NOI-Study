#include <bits/stdc++.h>
using namespace std;
const int kL = 1e5 + 1;
int n, m, ans;
vector<int> df[kL];
int main() {
  cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    int u, v;
    cin >> u >> v;
    if (u != v) {
      df[u].push_back(v), df[v].push_back(u);
    }
  }
  for (int i = 1; i <= n; i++) {
    sort(df[i].begin(), df[i].end());
    df[i].erase(unique(df[i].begin(), df[i].end()), df[i].end());
    ans = max(ans, (int)df[i].size());
  }
  cout << ans + 1;
  return 0;
}

/*
遍历每一个节点，找出它有多少个不同的邻居
1. 先排序，让相同的邻居挨在一起
2. 使用 unique 去重。unique 会把重复元素移到末尾，并返回重复部分的起始位置
erase 则把从那个位置到末尾的重复元素彻底删掉
*/
