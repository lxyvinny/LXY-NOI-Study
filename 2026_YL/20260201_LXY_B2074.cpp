#include <bits/stdc++.h>
using namespace std;
int a, b, c = 1;
string s[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
int main() {
  cin >> a >> b;
  for (int i = 1; i <= b; i++) {
    c = c * a % 7;
  }
  cout << s[c];
  return 0;
}