#include <bits/stdc++.h>
using namespace std;
int n;
double zlxg, jwj, xlf, zrs, zhd;
int main() {
  cin >> n >> zrs >> zhd;
  jwj = zhd / zrs;
  for (int i = 1; i <, zrs, zhd n; i++) {
    cin >> zrs >> zhd;
    xlf = zhd / zrs;
    if (xlf - jwj > 0.05) {
      cout << "better\n";
    } else if (xlf - jwj < 0.05) {
      cout << "worse\n";
    } else {
      cout << "same\n";
    }
  }
  return 0;
}