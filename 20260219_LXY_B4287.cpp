#include <bits/stdc++.h>
using namespace std;
int n, ans;
bool t[101][101];
int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for (int x = x1; x < x2; x++) {
      for (int y = y1; y < y2; y++) {
        t[x][y] = 1;
      }
    }
  }
  for (int x = 0; x <= 100; x++) {
    for (int y = 0; y <= 100; y++) {
      if (t[x][y]) {
        ans++;
      }
    }
  }
  cout << ans;
  return 0;
}