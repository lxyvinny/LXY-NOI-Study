#include <bits/stdc++.h>
using namespace std;
long long n;
int main() {
  for (cin >> n; n != 1;) {  // cin >>
    if (n % 2 == 1) {
      n = n * 3 + 1;
      cout << (n - 1) / 3 << "*3+1=" << n << '\n';
    } else {
      n /= 2;
      cout << n * 2 << "/2=" << n << '\n';
    }
  }
  cout << "End";
  return 0;
}
/*
判断输入的整数，如果是奇数将输入的数乘3加1，如果是偶数，则除以2。
*/