#include <bits/stdc++.h>
using namespace std;
const int kL = 1e5 + 1;
long long n, m, dy[kL][2], c[10000], cnt;
int main() {
  cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    cin >> dy[i][0] >> dy[i][1], c[dy[i][0]]++, c[dy[i][1]]++;
  }
  for (int i = 1; i <= m; i++) {
    cnt += (c[dy[i][0]] - 1) * (c[dy[i][1]] - 1);
  }
  cout << cnt * 2;
  return 0;
}