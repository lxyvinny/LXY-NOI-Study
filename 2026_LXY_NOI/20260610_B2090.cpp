#include <bits/stdc++.h>
using namespace std;
int age[101], n, c[4];
int main() {
  cin >> n;
  for (int i = 0; i <= n - 1; i++) {
    cin >> age[i];
  }
  for (int i = 0; i <= n - 1; i++) {
      c[0] += age[i] >= 1 && age[i] <= 18;
      c[1] += age[i] >= 19 && age[i] <= 35;
      c[2] += age[i] >= 36 && age[i] <= 60;
      c[3] += age[i] >= 61;
  }
  for (int i = 0; i < 4; i++) {
    cout << fixed << setprecision(2) << c[i] * 100.0 / n << "%\n";
  }
  return 0;
}