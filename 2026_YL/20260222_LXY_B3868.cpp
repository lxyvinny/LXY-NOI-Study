#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    string num;
    cin >> num;
    bool isBinary = 1;
    for (int j = 0; j < num.length(); j++) {
      if (num[j] != '0' && num[j] != '1') {
        isBinary = 0;
        break;
      }
    }

    bool isOctal = 1;
    for (int j = 0; j < num.length(); j++) {
      if (num[j] < '0' || num[j] > '7') {
        isOctal = 0;
        break;
      }
    }

    bool isDecimal = 1;
    for (int j = 0; j < num.length(); j++) {
      if (num[j] < '0' || num[j] > '9') {
        isDecimal = 0;
        break;
      }
    }

    bool isHexadecimal = 1;
    for (int j = 0; j < num.length(); j++) {
      if ((num[j] < '0' || num[j] > '9') && (num[j] < 'A' || num[j] > 'F')) {
        isHexadecimal = 0;
        break;
      }
    }
    cout << isBinary << " " << isOctal << " " << isDecimal << " " << isHexadecimal << endl;
  }
  return 0;
}