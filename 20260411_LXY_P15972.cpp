#include <bits/stdc++.h>
using namespace std;
const int kL = 1e5 + 1;
int n, m, cnt[kL];
vector<int> u, v;
int main() {
  cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    int t1, t2;
    cin >> t1 >> t2;
    cnt[t1] += t1 != t2, cnt[t2] += t2 != t1, u[i] = t1, v[i] = t2;
  }
  for (int i0 = 1; i0 <= m; i0++) {
    for (int j0 = 1; j0 <= m; j++) {
      for (int i1 = 1; i1 <= m; i1++) {
        for (int j1 = 1; j1 <= m; j1++) {
        }
      }
    }
  }
  // cout << (*max_element(cnt, cnt + kL) + 1) % 3435;
  return 0;
}

/*
1.把所有的绳子（边）看一遍。
2.去掉那些“自己连自己”的绳子。
3.对于每一个贴纸，数数它到底认识多少个不同的小伙伴。
4.找到认识小伙伴最多的那个“社交达人”。
5.最后的答案 = 这个达人的小伙伴数量 + 1（达人自己）。
*/