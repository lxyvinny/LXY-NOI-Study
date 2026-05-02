// 方式一
// #include <bits/stdc++.h>
// using namespace std;
// int n, cnt;
// bool Z(int m) {
//   for (int i = 2; i * i <= m; i++) {
//     if (m % i == 0) {
//       return 0;
//     }
//   }
//   return 1;
// }
// int main() {
//   cin >> n;
//   for (int i = 2; i <= n; i++) {
//     cnt += Z(i);
//     // if (Z(i)) {
//     //   cnt++;
//     // }
//   }
//   cout << cnt;
//   return 0;
// }

// 方式二
#include <bits/stdc++.h>
using namespace std;
int n, cnt;
bool Z(int m) {
  int b = 1;
  for (int i = 2; i * i <= m; i++) {
    b = b && m % i;
  }
  return b;
}
int main() {
  cin >> n;
  for (int i = 2; i <= n; i++) {
    cnt += Z(i);
    // if (Z(i)) {
    //   cnt++;
    // }
  }
  cout << cnt;
  return 0;
}