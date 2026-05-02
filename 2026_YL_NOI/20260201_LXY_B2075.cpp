#include <bits/stdc++.h>
using namespace std;
long long a, b, cf = 1;
int main() {
  cin >> a >> b;
  for (int i = 1; i <= b; i++) {
    // 题目问末三位，所以对1000取模。
    cf *= a;
    cf %= 1000;
  }
  cout << setw(3) << setfill('0') << cf;
  return 0;
}