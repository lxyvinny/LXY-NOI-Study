#include <bits/stdc++.h>
using namespace std;
int z, k, a = 0, b = 0, c = 0;
// 许老师，下面是我想的三目运算符版本
int main() {
  cin >> k;
  for (int i = 1; i <= k; i++) {
    cin >> z;
    (z == 1 ? a++ : z == 5 ? b++
                : z == 10  ? c++
                           : c += 0);
  }
  cout << a << '\n'
       << b << '\n'
       << c;
  return 0;

  /*许老师，下面是我想的第1个版本
  int z, k, a = 0, b = 0, c = 0;
  int main() {
    cin >> k;
    for (int i = 1; i <= k; i++) {
      cin >> z;
      if (z == 1) {
        a++;
      } else if (z == 5) {
        b++;
      } else if (z == 10) {
        c++;
      }
    }
    cout << a << '\n'
         << b << '\n'
         << c;
    return 0;
    */
}