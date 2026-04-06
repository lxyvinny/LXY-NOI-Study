#include <bits/stdc++.h>
using namespace std;
const int kL = 5e3;
long long n, m, t[kL], sum[kL], jdt[kL][kL];  // jdt 表示这个节点的总时间。
int main() {
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    cin >> t[i];
    // 找到目前和花费时间最少的节点，把这个任务分给每个节点，累加时间在这个节点上。
    int mb = 1, zxt = sum[1];
    for (int j = 1; j < n; j++) {
      if (sum[j] < zxt) {
        zxt = sumt[t];
      } else if (sum[j] = zxt) {
        break;
      }
    }
  }
  for (int i = 0; i < m; i++) {
  }
  return 0;
}

/*
// 1. 准备阶段
输入 n (机器数) 和 m (任务数)
创建一个列表 t，存入 m 个任务的时间

// 创建“累积时间表”，初始化为 0
创建一个数组 time_sum，长度为 n，初始值全为 0

// 创建“任务储藏室”，每台机器一个盒子
创建一个二维列表 machine_jobs，包含 n 个子列表

// 2. 分发阶段 (核心循环)
从第 1 个任务到第 m 个任务 (假设当前任务编号是 i):

    // A. 寻找目前最闲的机器
    设定 目标机器 = 1
    设定 最小时间 = time_sum[1]

    从第 2 台机器看起，直到第 n 台 (假设当前看的机器是 j):
        如果 time_sum[j] < 最小时间:
            最小时间 = time_sum[j]
            目标机器 = j
        否则 如果 time_sum[j] == 最小时间:
            // 时间一样的话，选编号小的，但因为我们是从小到大看的，
            // 所以不需要做任何操作，目标机器依然是原来那个较小的。
            跳过

    // B. 把任务给它
    将 任务编号 i 放入 machine_jobs[目标机器] 的盒子里
    把 任务耗时 t[i] 加到 time_sum[目标机器] 上

// 3. 成果展示阶段
从第 1 个盒子看到第 n 个盒子:
    如果 盒子是空的:
        打印 0
    否则:
        打印出盒子里存的所有任务编号
*/