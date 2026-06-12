#include <bits/stdc++.h>
using namespace std;
int n, i = 1;
int main() {
  cin >> n;
  while(i * i <= n) {
    cout << i * i << ' ';
    i++;
  }
  return 0;
}