#include <bits/stdc++.h>
using namespace std;
int i;
void Cout(int m) {
  // if (m > i) {
  //   return;
  // }
  // cout << m << '\n';
  // Cout(m + 1);
  cout << m << '\n';
  if (m < i) {
    Cout(m + 1);
  }
}
int main() {
  cin >> i;
  Cout(1);
  return 0;
}