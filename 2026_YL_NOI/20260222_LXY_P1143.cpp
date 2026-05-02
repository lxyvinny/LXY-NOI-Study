#include <bits/stdc++.h>
using namespace std;
int n, x, a;
string s1, s2;
int main() {
  cin >> n >> s1 >> x;
  for (char ch : s1) {
    a = a * n + (ch <= '9' ? ch - '0' : ch - 'A' + 10);
  }
  for (long long i = a; i > 0; i /= x) {
    s2 += i % x + (i % x <= 9 ? '0' : 'A' - 10);
  }
  for (int i = s2.size() - 1; i >= 0; i--) {
    cout << s2[i];
  }
  return 0;
}