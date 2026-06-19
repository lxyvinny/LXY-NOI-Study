#include <bits/stdc++.h>
using namespace std;
int a, b, f;
char c;
int main() {
  cin >> a >> b >> c >> f;
  if (f != 0) {
    for (int i = 1; i <= a; i++) {
      cout << string(b, c) << '\n';
    }
  } else if (f == 0) {
    cout << string(b, c) << '\n';
    for (int i = 1; i <= a - 2; i++) {
      cout << c << setw(b - 1) << setfill(' ');
      cout << c << '\n';
    }
    cout << string(b, c);
  }
  return 0;
}