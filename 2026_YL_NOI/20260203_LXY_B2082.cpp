#include <bits/stdc++.h>
using namespace std;
int L, R, cnt;
int main() {
  cin >> L >> R;
  for (int num = L; num <= R; num++) {   // 声名num变量初始值为L。如果num小于等于R就循环。num自增1。
    for (int t = num; t > 0; t /= 10) {  // 声名temp1用来拆分num。
      cnt += t % 10 == 2;                // 9-11行最精简的写法
      // int temp2 = temp1 % 10;                        // 用temp2来存temp1的个位数。
      // if (temp2 == 2) {
      //   cnt++;
      // }
    }
  }
  cout << cnt << ' ';
  return 0;
}
// int main() {
//   cin >> L >> R;                             // 输入L和R
//   for (int i = L; i <= R; i++) {             // 枚举L到R之间所有的数
//     string st = to_string(i);                // 把整数i转换成字符串i，并复制给st
//     for (int j = 0; j < st.size(); j++) {  // 循环st的长度次数
//       if (st[j] == '2') {                    // 判断st里是否有'2'这个字符
//         cnt++;                               // 如果st里有'2'这个字符，计数器加一
//       }
//     }
//   }
//   cout << cnt;  // 输出计数器
//   return 0;
// }
/*
先输入两个数字2-22
枚举上面两个数字之间及自身的所有数字
将数字转换成字符串
声名一个计数器，上面所有数字中如果有2，计数器加一，并输出
*/