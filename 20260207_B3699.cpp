#include <bits/stdc++.h>
using namespace std;
string s;
long long x;
int main() {
  cin >> s;
  x = stoll(s);
  cout << (s.find("62") != -1 || x % 62 == 0 ? "Yes" : "No");
  return 0;
}