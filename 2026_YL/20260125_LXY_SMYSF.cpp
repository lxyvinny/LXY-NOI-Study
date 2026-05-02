#include <bits/stdc++.h>
using namespace std;
int main() {
  int cs, bc, s, ys;
  cin >> bc >> cs;
  // if (cs == 0) {
  //   cout << "Error";
  // } else {
  //   cout << bc / cs << " " << bc % cs;
  // }

  (cs == 0) ? cout << "Error" : (cout << bc / cs << " " << bc % cs);
}

// int main() {
//   int a;
//   cin >> a;
//   cout << (a <= 500 ? "8" : "10");
//   return 0;
// }

// int main() {
//   int a;
//   cin >> a;
//   cout << (a % 2 == 0 ? "yes" : "no");
//   return 0;
// }

// int main() {
//   int a, b, c;
//   cin >> a >> b >> c;
//   if (a > b) {
//     cout << a << endl;
//   } else {
//     cout << b << endl;
//   }
//   cout << (a > b ? a : b) << endl;
//   int ma = a > b && a > c ? a : (b > c ? b : c);
//   cout << ma;
//   return 0;
// }