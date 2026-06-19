#include <bits/stdc++.h>
using namespace std;
int k, cnt;
string s;
int main() {
  cin >> s >> k;
  for (char ch : s) {
    cnt += ch == '3';
  }
  cout << (cnt == k ? "YES" : "NO");
  return 0;
}