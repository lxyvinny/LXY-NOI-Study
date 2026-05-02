#include <bits/stdc++.h>
using namespace std;
int n, x;
string t;
int main() {
  cin >> n >> x;
  for (int i = n; i > 0; i /= x) {
    if (i % x < 10) {
      t += i % x + '0';
    } else {
      t += i % x - 10 + 'A'; // 
    }
  }
  for (int i = t.size() - 1; i >= 0; i--) {
    cout << t[i];
  }
  return 0;
}re