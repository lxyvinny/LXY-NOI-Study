#include <bits/stdc++.h>
using namespace std;
int s[5][5], n, m;
int main() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> s[i][j];
    }
  }
  cin >> m >> n;
  for (int i = 0; i < 5; i++) {
    swap(s[m - 1][i], s[n - 1][i]); // 这里的 m 和 n 要减一，因为所有的数组的下标都是从零开始，到这个数减一。
  }
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cout << s[i][j] << ' ';
    }
    cout << '\n';
  }
  return 0;
}