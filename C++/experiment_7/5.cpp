/*
输入一组数据并存入某一维数组中，用选择排序法完成数组元素的降序排列并输出。
*/
// 选择排序
#include <iostream>
using namespace std;
int main() {
    short n, i, j, index, arr[20] = { 0 };
    cout << "请输入数组个数元素的个数（n<=20)："; cin >> n;
    cout << "请输入" << n << "个待排序的数：" << endl;
    // 获取数组的值
    for (i = 0; i < n; i++)
        cin >> arr[i];

    // 选择排序算法
    // 外循环：未排序区间为 [i, n-1]
    for (i = 0; i < n - 1; i++) {
        index = i, j = i + 1;
        // 内循环：找到未排序区间内的最小元素
        for (j = i + 1; j < n; j++)
            if (arr[j] > arr[index])
                index = j;    // 记录最小元素的索引
        // 将该最小元素与未排序区间的首个元素交换
        swap(arr[i], arr[index]);
    }

    cout << "排序后的结果为:" << endl;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
