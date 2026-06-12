#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (i == s.size() - 1) {
      cout << char(s[i] + s[0]);
    } else {
      cout << char(s[i] + s[i + 1]);
    }
  }
  return 0;
}