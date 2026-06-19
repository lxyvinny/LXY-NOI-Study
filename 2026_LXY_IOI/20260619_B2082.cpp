#include <bits/stdc++.h>
using namespace std;
int L, R, cnt;
int main() {
  cin >> L >> R;
  for (int num = L; num <= R; num++) {
    for (int t = num; t > 0; t /= 10) {
      cnt += t % 10 == 2;
    }
  }
  cout << cnt << ' ';
  return 0;
}