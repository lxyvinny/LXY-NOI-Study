#include <bits/stdc++.h>
using namespace std;
int n, sws, ans;
int main() {
  for (cin >> n; n--;) {
    cin >> sws;
    int g = sws % 10;
    int s = sws / 10 % 10;
    int b = sws / 100 % 10;
    int q = sws / 1000;
    // 下面是许老师要求的写法：
    ans += g - q - b - s > 0;
    // if (c > 0) {
    //   ans++;
    // }
  }
  cout << ans << '\n';
  return 0;
}