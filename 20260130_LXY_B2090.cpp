#include <bits/stdc++.h>
using namespace std;
int n, nl[4], cnt[4];
int main() {
  cin >> n;
  for (int i = 0; i <= n - 1; i++) {
    cin >> nl[i];
  }
  for (int i = 0; i <= n - 1; i++) {
    if (nl[i] > 0 && nl[i] <= 18){
      
    }
  }
  // int n, nl[101];
  // int main() {
  //   cin >> n;
  //   for (int i = 1; i <= n; i++) {
  //     cin >> nl[i];  // 把n个数字元素存到nl数组里的i号位置里
  //   }
  //   for (int i = 1; i <= n; i++) {
  //     // cout << nl[i] << ' ';  // 把数组里的第i号位置里的数字元素输出
  //     if (nl[i] > 0 && nl[i] <= 18) {
  //       cout << "20.00%" << '\n';
  //     } else if (nl[i] >= 19 && nl[i] <= 35) {
  //       cout << "20.00%" << '\n';
  //     } else if (nl[i] >= 36 && nl[i] <= 60) {
  //       cout << "20.00%" << '\n';
  //     } else if (nl[i] >= 61) {
  //       cout << "40.00%" << '\n';
  //     }
  //   }
  return 0;
}