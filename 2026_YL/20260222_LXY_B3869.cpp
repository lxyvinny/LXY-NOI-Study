#include <bits/stdc++.h>
using namespace std;
long long n, K, d, len, t2;
string num;
char t1;
int main() {
  for (cin >> n; n--;) {
    cin >> K >> num;
    d = 0;
    len = num.size();
    for (int i = 0; i < len; i++) {
      t1 = num[i];
      t2 = 0;
      if (t1 >= 'A' && t1 <= 'F') {
        t2 = t1 - 'A' + 10;
      } else {
        t2 = t1 - '0';
      }
      d += t2 * pow(K, len - 1 - i);
    }

    cout << d << '\n';
  }
  return 0;
}