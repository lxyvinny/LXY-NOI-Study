#include <bits/stdc++.h>
using namespace std;
int x;
double n, sum;
void f(int m) {
  sum += sqrt(n);
  n--;
  if (n == 1) {
    sum += sqrt(n + x);
    return;
  }
  f(n); 
}
int main() {
  cin >> n >> x;
  f(n);
  cout << fixed << setprecision(2) << sum;
  return 0;
}