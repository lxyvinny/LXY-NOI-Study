#include <bits/stdc++.h>
using namespace std;
int a, b, cf = 1;
string s[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
int main() {
  cin >> a >> b;
  for (int i = 1; i <= b; i++) {
    cf = cf * a % 7;
  }
  cout << s[cf];
  // if (cf == 0) {
  //   cout << "Sunday";
  // } else if (cf == 1) {
  //   cout << "Monday";
  // } else if (cf == 2) {
  //   cout << "Tuesday";
  // } else if (cf == 3) {
  //   cout << "Wednesday";
  // } else if (cf == 4) {
  //   cout << "Thursday";
  // } else if (cf == 5) {
  //   cout << "Friday";
  // } else if (cf == 6) {
  //   cout << "Saturday";
  // }
  return 0;
}