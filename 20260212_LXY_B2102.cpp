#include <bits/stdc++.h>
int a[6][6], i, j, d, dd[6], x, xx[6], answer;
using namespace std;
int main() {
  for (i = 1; i <= 5; i++) {
    for (j = 1; j <= 5; j++) {
      cin >> a[i][j];
    }
  }
  for (i = 1; i <= 5; i++) {
    d = 0;
    for (j = 1; j <= 5; j++) {
      d = max(a[i][j], d);
    }
    dd[i] = d;
  }
  for (j = 1; j <= 5; j++) {
    x = 1e8;
    for (i = 1; i <= 5; i++) {
      x = min(a[i][j], x);
    }
    xx[j] = x;
  }
  for (i = 1; i <= 5; i++) {
    for (j = 1; j <= 5; j++) {
      if (a[i][j] == dd[i] && a[i][j] == xx[j]) {
        cout << i << ' ' << j << ' ' << a[i][j] << '\n';
        answer++;
      }
    }
  }
  cout << (answer == 0 ? "not found" : " ");
  return 0;
}