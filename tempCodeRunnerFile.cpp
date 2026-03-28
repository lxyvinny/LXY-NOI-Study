#include <bits/stdc++.h>
using namespace std;
int n, k[5001], b[5001][5000], m, cnt, qk[5000];  // 这里的 k 表示第 i 号包有几个依赖，b 表示依赖的编号，qk 表示某个包有没有安装。
int Az(int a) {
  if (qk[b[a][]]) {
    return;
  }
  for (int i = 0; i < k[a]; i++) {
    if (qk[b[a][i]] == 0) {
      for (int j = 0; j < k[a]; j++) {
        Az(b[a][i]);
      }
      qk[b[a][i]] = 1;
    }
  }
}
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> k[i];
    for (int j = 0; j < k[i]; j++) {
      cin >> b[i][j];
    }
  }
  return 0;
}

/*
题目思路：
函数(安装包):
    1. 如果 这个包是已安装:
       - 直接返回 (什么都不用做，因为已经装过了)

    2. 如果 这个包 还没安装:
       - 第一步：去说明书里看这个包有哪些（依赖包）
       - 第二步：对于每一个（依赖包），都执行一次 递归函数
       - 第三步：当所有的依赖包都装好了，把当前包标记为“已安装”

*/