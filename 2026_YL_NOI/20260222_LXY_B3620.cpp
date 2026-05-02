#include <bits/stdc++.h>
using namespace std;
int x, ans;
string s;
int main() {
  cin >> x >> s;
  for (int i = 0; i < s.size(); i++) {
    ans = ans * x + (s[i] - '0' < 10 ? s[i] - '0' : s[i] + 10 - 'A');
  }
  cout << ans;
  return 0;s\
}