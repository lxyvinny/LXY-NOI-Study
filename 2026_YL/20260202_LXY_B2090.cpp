#include <bits/stdc++.h>
using namespace std;
int age[101];
int main() {
  int n, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
  cin >> n;
  for (int i = 0; i <= n - 1; i++) {
    cin >> age[i];
  }
  for (int i = 0; i <= n - 1; i++) {
    if (age[i] >= 1 && age[i] <= 18) {
      c1++;
    } else if (age[i] >= 19 && age[i] <= 35) {
      c2++;
    } else if (age[i] >= 36 && age[i] <= 60) {
      c3++;
    } else if (age[i] >= 61) {
      c4++;
    }
  }
  cout << fixed << setprecision(2) << c1 * 100.0 / n << '%' << '\n'
       << c2 * 100.0 / n << '%' << '\n'
       << c3 * 100.0 / n << '%' << '\n'
       << c4 * 100.0 / n << '%' << '\n';
  return 0;
}