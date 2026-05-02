#include <bits/stdc++.h>
using namespace std;
string s, t, w;
int p;  // 定义变量 p 用于表示两个字符串最靠前的不同位置
int main() {
  cin >> s >> t;
  for (char ch = 'a'; ch <= 'z'; ch++) {  // 按照标准字典序生成一个包含所有字母的字符串，按照字典序顺序枚举每个字符
    w += ch;                              // 依次将每个字符添加到当前字符串的后面
  }

  for (; p < s.size() && p < t.size() && s[p] == t[p]; p++) {
    // 从下标 0 开始，逐个检查每个位置，如果在 s 和 t 中均没有越界，并且该位置上的字符是相同的，则继续寻找
  }
  if (p < s.size() && p < t.size() && s[p] < t[p]) {  // 如果找到的位置没有越界并且 s 中的字符更小
    swap(w[s[p] - 'a'], w[t[p] - 'a']);               // 交换两个字符在字符串中的位置，字符和位置之间相差 'a' 的距离
  }
  cout << w;
  return 0;
}