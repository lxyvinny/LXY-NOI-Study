#include <bits/stdc++.h>
using namespace std;

string a, b;
int c, y;

int main() {
  cin >> a >> b;

  for (int i = 0; i < b.size(); i++) {
    c = c * 10 + (b[i] - '0');
  }

  for (int i = 0; i < a.size(); i++) {
    y = y * 10 + (a[i] - '0');
    y %= c;
  }
  cout << y;
  return 0;
}