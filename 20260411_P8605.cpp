#include <bits/stdc++.h>
using namespace std;
const int kL = 1e4 + 1;
int n, m;
long long ans;  // 结果可能很大，用 long long
vector<int> a[kL];
int main() {
  cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    int u, v;
    cin >> u >> v, a[u].push_back(v), a[v].push_back(u);
  }
  // 遍历每一个点 i，将其作为路径中的第二个点 v
  for (int i = 1; i <= n; i++) {
    for (int k = 0; k < a[i].size(); k++) {  // 遍历 i 的邻居 j，边 (i, j) 即为中间边
      // 以 i-j 为中间边的路径数 = (i的度数-1) * (j的度数-1)
      ans += (long long)(a[i].size() - 1) * (a[j].size() - 1);
    }
  }
  cout << ans;
  return 0;
}

/*
图的存储：首先使用邻接表存储每个节点的邻接节点。
枚举边：对于每一条边 (u, v)，遍历 u 和 v 的邻接节点，寻找符合要求的路径。
计算路径数量：计算符合要求的路径数。
*/

/*
二、算法实战：网络寻路（路径计数）
课程通过“网络寻路”例题，演示了如何利用邻接表进行多层枚举与路径计数：

1. 问题定义与约束
路径定义：路径是一组首尾相连的边。简单路径要求路径中不含重复的点（必然不含重复边）。
题目要求：给定一张无向简单图，要求统计所有长度为 3 的路径数量。路径首尾节点可以相同，
但中间节点必须互不相同且不得与首尾节点相同。

2. 枚举算法实现
多层循环枚举：算法核心是通过三层循环嵌套实现。第一层枚举起点 A，第二层枚举 A 的邻接点 B，第三层枚举 B 的邻接点 C，
以此类推，直至枚举出长度为 3 的路径。

合法性判定：在枚举出路径 A-B-C-D 后，需检查中间节点 B 和 C 是否与端点 A 或 D 重合，以及 B 和 C 是否重合，
确保路径满足“中间节点互异且不与端点重合”的条件。

*/

/*
#include <bits/stdc++.h>
using namespace std;
const int kL = 1e4 + 1;
int n, m, ans;
vector<int> a[kL];
int main() {
  cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    int u, v;
    cin >> u >> v, a[u].push_back(v), a[v].push_back(u);
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      for (int k = 1; k <= n; k++) {
        if (i != j && i != k && ) {
          ans++;
        }
      }
    }
  }
  cout << ans;
  return 0;
}
*/