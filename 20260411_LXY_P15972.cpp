#include <bits/stdc++.h>
using namespace std;
const int kL = 1e5 + 1;
int n, m, cnt[kL], b[kL][kL];
vector<int> u, v;
int main() {
  cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    int u, v;
    cin >> u >> v;
    cnt[u] += u != v && !b[u][v], cnt[v] += u != v && !b[v][u], b[u][v] = b[v][u] = 1;
  }
  cout << (*max_element(cnt, cnt + kL) + 1) % 3435;
  return 0;
}
// 把所有临点排序。
/*
1.把所有的绳子（边）看一遍。
2.去掉那些“自己连自己”的绳子。
3.对于每一个贴纸，数数它到底认识多少个不同的小伙伴。
4.找到认识小伙伴最多的那个“社交达人”。
5.最后的答案 = 这个达人的小伙伴数量 + 1（达人自己）。
*/  