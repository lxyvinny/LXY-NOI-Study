#include <bits/stdc++.h>
using namespace std;
int n, Grade, maximum = 0;
int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> Grade;
    if (Grade > maximum) {
      maximum = Grade;
    }
  }
  cout << maximum;
  return 0;
}