#include <bits/stdc++.h>
using namespace std;
const int kL = 1e2;
long long n, m, r, hssf[kL], dssf[kL], hsxf[kL], dsxf[kL], cc[kL], cnt, b[kL];
int main() {
  cin >> n >> m >> r, cnt = n;
  for (int i = 0; i < n; i++) {
    cin >> hssf[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> dssf[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> hsxf[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> dsxf[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> cc[i], cc[i]--;
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (dsxf[j] > dsxf[j + 1]) {
        swap(dsxf[j], dsxf[j + 1]);
        swap(hsxf[j], hsxf[j + 1]);
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (hssf[cc[i]] == hsxf[j] && dssf[cc[i]] < dsxf[j] && !b[j]) {
        cnt--;
        b[j] = 1;
        break;
      }
    }
  }
  cout << cnt;
  return 0;
}