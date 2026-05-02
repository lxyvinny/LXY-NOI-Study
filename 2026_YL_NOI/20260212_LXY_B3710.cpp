#include <bits/stdc++.h>
using namespace std;
double s;
int Plan;
int main() {
  cin >> s;
  s *= 1e8;
  for (int i = 0; i <= 100; i++) {
    for (int j = 0; j <= 100; j++) {
      for (int k = 0; k <= 100; k++) {
        for (int num = 0; num <= 100; num++) {
          Plan += i * j * k * num == s;
        }
      }
    }
  }
  cout << Plan;
  return 0;
}