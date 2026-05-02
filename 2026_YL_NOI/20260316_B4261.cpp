#include <bits/stdc++.h>
using namespace std;
int x;
int main() {
  cin >> x;
  for (int i = 0; i <= 2025; i++) {
    if ((x | i) + (x & i) == 2025) {
      cout << i;
      break;
    }
  }
  return 0;
}