// #include <bits/stdc++.h>
// using namespace std;
// unsigned n, g, l, ans;
// int main() {
//   cin >> n;
//   g = (n >> 16) & 0xFFFF;
//   l = n & 0xFFFF;

//   ans = (l << 16) | g;

//   cout << ans;
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;
unsigned n;
int main() {
  cin >> n;
  cout << (n << 16 | n >> 16);
  return 0;
}