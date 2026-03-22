#include <bits/stdc++.h>
using namespace std;
long long rem, b;
string a, r;
int main() {
  cin >> a >> b;
  for (int i = 0; i < a.size(); i++) {
    rem = rem * 10 + (a[i] - '0');
    int t = rem / b;
    r += (t + '0');
    rem = rem % b;
  }
  int t = 0;
  for (; t < r.size() && r[t] == '0'; t++) {
  }
  if (t == r.size()) {
    cout << "0";
  } else {
    for (int i = t; i < r.size(); i++) {
      cout << r[i];
    }
  }
  return 0;
}