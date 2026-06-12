#include <bits/stdc++.h>
using namespace std;
int a, b, ans = 1;
string s[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
int main() {
  cin >> a >> b;
  for (int i = 1; i <= b; i++){
    ans = ans * a % 7;
  }
  cout << s[ans];
  return 0;
}