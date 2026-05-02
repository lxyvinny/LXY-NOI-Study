#include <bits/stdc++.h>
using namespace std;
// 许老师，下面是我想的三目运算符版本
int m, n, s = 0;
int main() {
  cin >> m >> n;
  for (int i = (m % 2 == 1 ? m : m + 1); i <= n; i += 2) {
    s += i;
  }
  cout << s;
  return 0;
}

// 许老师，下面是我想的if版本
//  int m, n, s;
//  int main(){
//    cin>>m>>n;
//    for(int i=m;i<=n;i++){
//      if(i%2==1){
//        s+=i;
//      }
//    }
//    cout<<s;
//    return 0;
//  }