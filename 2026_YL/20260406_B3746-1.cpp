#include <bits/stdc++.h>
using namespace std;
const int kL = 5e3 + 1;
long long n, m, t[kL], sj[kL], rw[kL], cnt[kL], ans[kL][kL];
int main() {
  cin >> n >> m;                                                
  for (int i = 1; i <= m; i++) {
    cin >> t[i];
  }
  // 在所有节点中找到累计时间最小的节点。
  for (int i = 1; i <= m; i++) {  
    int pos = 1;  // pos 表示当前累计时间最小的节点编号。
    // 找最小时间节点。
    for (int j = 2; j <= n; j++) {
      if (sj[j] < sj[pos]) {
        pos = j;
      }
    }
    // 把任务分给该节点，并更新它的累计时间。
    sj[pos] += t[i];  // 累加时间在这个节点上。
    // 记录该节点接收的任务编号。
    ans[pos][++cnt[pos]] = i;
  } 
  for (int i = 1; i <= n; i++) {
    if (!ans[i][1]) {
      cout << 0;
    } else {
      for (int j = 1; ans[i][j]; j++) {
        cout << ans[i][j] << ' ';
      }
    }
    cout << '\n';
  }
  return 0;
}