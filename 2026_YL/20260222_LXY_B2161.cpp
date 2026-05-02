#include <bits/stdc++.h>
using namespace std;
int d;
string b;
int main() {
  cin >> d;
  if (!d) {
    cout << 0;
    return 0;
  }
  for (int i = d; i > 0; i /= 2) {
    b += i % 2 + '0';
  }
  for (int i = b.size() - 1; i >= 0; i--) {
    cout << b[i];
  }
  return 0;
}