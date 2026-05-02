#include <bits/stdc++.h>
using namespace std;
int n;

void A(int i) {
  if (i == 0) {
    return;
  }
  A(i - 1);
  cout << i << '\n';
}

int main() {
  cin >> n;
  A(n);
  return 0;
}