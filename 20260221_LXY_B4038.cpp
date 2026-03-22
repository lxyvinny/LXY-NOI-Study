#include <iostream>
using namespace std;
int n, t, a[10005];
int main() {
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    int sum = 0, l = 0;
    bool ok = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
    }
    for (int i = 0; i < n - 1; i++) {
      l += a[i];
      if (l * 2 == sum) {
        ok = true;
        break;
      }
    }
    if (ok) {
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }
  }
  return 0;
}