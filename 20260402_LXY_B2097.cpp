#include <bits/stdc++.h>
using namespace std;
int n, k[100], cnt[2001], mx;
int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> k[i];
    if (k[i - 1] == k[i]) {
      cnt[k[i]]++;
    }
  }
  cout << *max_element(cnt, cnt + *max_element(k, k + n - 1)) + 1; // 这里要 + 1 的原因是，因为全局变量、数组里面每个元素的值都是 0。
  return 0;
}