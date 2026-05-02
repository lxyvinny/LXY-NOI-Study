#include <bits/stdc++.h>
using namespace std;
long long x, t, cnt;
int main() {
  cin >> x;
  for (long long i = x; i > 0; i /= 10) {
    t = i % 10;
    if (t == 2 || t == 6 || t == 9 || t == 0) {
      cnt++;
    } else if (t == 8) {
      cnt += 2;
    }
  }
  cout << cnt;
  return 0;
}