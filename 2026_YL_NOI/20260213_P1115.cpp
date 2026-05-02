#include <bits/stdc++.h>
using namespace std;
// 定义数组最大长度
const int kMaxA = 2e5;
int n, b[kMaxA + 1],  mi, ans = -1e9;         // mi 记录当前最小前缀和，ans 记录最大子段和
int main() {
    cin >> n;        // 读入数组长度
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;            // 读入第 i 个数
        b[i] = b[i - 1] + x; // 计算前缀和：b[i] = 前 i 个数的和
        ans = max(ans, b[i] - mi); // 当前最大子段和 = 当前前缀和 - 之前的最小前缀和
        mi = min(mi, b[i]);        // 更新最小前缀和，方便下一次计算
    }
    cout << ans;  // 输出最大子段和
    return 0;
}