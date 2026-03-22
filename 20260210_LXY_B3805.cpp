#include <bits/stdc++.h>
using namespace std;
int n, cnt = 0;
int main() {
  cin >> n;
  int S[n + 1], s[n + 1] = {0};
  for (int i = 1; i <= n; i++) {
    cin >> S[i];
    if (s[S[i]] == 0) {
      cnt++;
      s[S[i]] = 1;
    }
  }
  cout << cnt;
  return 0;
}