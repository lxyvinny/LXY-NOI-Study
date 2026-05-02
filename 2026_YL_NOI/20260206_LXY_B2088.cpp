#include <bits/stdc++.h>
using namespace std;
int a[10];
double sum, b[10] = {28.9, 32.7, 45.6, 78.0, 35.0, 86.2, 27.8, 43.0, 56.0, 65.0};
int main() {
  for (int i = 0; i <= 9; i++) {
    cin >> a[i];
    sum += b[i] * a[i]; // 这里要干的是书的价格乘买的本数还要加赋值给 sum。
  }
  cout << fixed << setprecision(1) << sum; // 题目要求保留小数点后 1 位，所以要 fixed 和 setprecision(1)（设置精度）。
  return 0;
}
/*
计算概论 28.9 元/本
数据结构与算法 32.7 元/本
数字逻辑 45.6元/本
C++程序设计教程 78 元/本
人工智能 35 元/本
计算机体系结构 86.2 元/本
编译原理 27.8元/本
操作系统 43 元/本
计算机网络 56 元/本
JAVA程序设计 65 元/本
;