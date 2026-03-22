#include <bits/stdc++.h>
using namespace std;
int x, y, z, i, answer;
int main() {
  for (cin >> x >> y >> z; i <= z / x; i++) {
    answer += (z - x * i) % y == 0;
  }
  cout << answer;
  return 0;
}