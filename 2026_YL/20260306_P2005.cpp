// #include <bits/stdc++.h>
// using namespace std;
// const int kL = 2e4;
// int a[kL], b[kL], c[kL], rem;
// string s1, s2;

// bool Check(int i) {                       // 将出除数左移 i 位以后与被除数进行比较。
//   for (int j = s2.size(); j >= 0; j--) {  // 从除数的长度的位号，到 0 号位。
//     if (a[i + j] != b[j]) {               // 如果 a[i + j] != b[j]。
//       return a[i + j] >= b[j];            // 返回 a[i + j] > b[j]（以下注释代码的缩写）。
//     }
//     // if (a[i + j] > b[j]) {
//     //   return 1;
//     // } else if (a[i + j] < b[j]) {
//     //   return 0;
//     // }
//   }
//   return 1;
// }
// int main() {
//   cin >> s1 >> s2;
//   // 转换
//   for (int i = 0; i < s1.size(); i++) {
//     a[i] = s1[s1.size() - 1 - i] - '0';
//   }
//   for (int i = 0; i < s2.size(); i++) {
//     b[i] = s2[s2.size() - 1 - i] - '0';
//   }
//   for (int i = s1.size() - s2.size(); i >= 0; i--) {  // 从最高位的号（s1.size() - s2.size()）开始，一直到 0，每次 i - 1。
//                                                       // 不断判断商的 i 号位是否可以加一，如果可以就做减法。
//     while (Check(i)) {                                // 如果还能减。
//       c[i]++;                                         // 商的这一位 ++。
//       for (int j = 0; j < s2.size(); j++) {
//         a[i + j] -= b[j];
//         if (a[i + j] < 0) {
//           a[i + j] += 10;
//           a[i + j + 1]--;
//         }
//       }
//     }
//   }
//   // 找到最高非 0 位。
//   int t = s1.size() - s2.size();
//   for (; t > 0 && !c[t]; t--) {
//   }
//   for (; t >= 0; t--) {
//     cout << c[t];
//   }
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const int kL = 3e4;
int a[kL], b[kL], c[kL], l, rem;
string s1, s2;

bool Check(int i) {                       // 将出除数左移 i 位以后与被除数进行比较。
  for (int j = s2.size(); j >= 0; j--) {  // 从除数的长度的位号，到 0 号位。
    if (a[i + j] != b[j]) {               // 如果 a[i + j] != b[j]。
      return a[i + j] >= b[j];            // 返回 a[i + j] > b[j]（以下注释代码的缩写）。
    }
    // if (a[i + j] > b[j]) {
    //   return 1;
    // } else if (a[i + j] < b[j]) {
    //   return 0;
    // }
  }
  return 1;
}
int main() {
  cin >> s1 >> s2;
  l = max(int(s1.size()) - int(s2.size()), 0);
  for (int i = 0; i < s1.size(); i++) {
    a[i] = s1[s1.size() - 1 - i] - '0';
  }
  for (int i = 0; i < s2.size(); i++) {
    b[i] = s2[s2.size() - 1 - i] - '0';
  }
  for (int i = l; i >= 0; i--) {  // 从最高位的号（s
                                  // 不断判断商的 i
    while (Check(i)) {            // 如果还能减。
      c[i]++;                     // 商的这一位 ++。
      for (int j = 0; j < s2.size(); j++) {
        a[i + j] -= b[j];
        if (a[i + j] < 0) {
          a[i + j] += 10;
          a[i + j + 1]--;
        }
      }
    }
  }
  // 找到最高非 0 位。
  for (l -= l && !c[l]; l >= 0; l--) {
    cout << c[l];
  }
  return 0;
}