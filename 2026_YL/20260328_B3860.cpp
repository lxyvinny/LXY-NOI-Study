#include <bits/stdc++.h>
using namespace std;
int n, k[5001], b[5001][5000], cnt, qk[5001];  // 这里的 k 表示第 i 号包有几个依赖，b 表示依赖的编号，qk 统计某个包有没有安装。
void Az(int a) {
  // 这个if是记忆化，如果是记忆化，"返回"与“标记”在一个模块中。
  //  如果某个包安装了，就直接返回。
  if (qk[a]) {
    return;
  } else {
    qk[a] = 1;  // 将这个包的情况设置为已安装
    cnt++;
  }
  // 这里是递归的用途
  //  如果某个包还没有安装，就安装这个包（数值存到 Az(b[a][i])）
  for (int i = 0; i < k[a]; i++) {
    Az(b[a][i]);
  }
}
int main() {
  cin.tie(0)->sync_with_stdio(0);//因为c++会兼容c的读入，所以数据读取慢。把C的同步关了。当读入量超过500000的时候，需要写这句话。
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> k[i];
    for (int j = 0; j < k[i]; j++) {
      cin >> b[i][j];
    }
  }
  Az(1);
  cout << cnt;
  return 0;
}