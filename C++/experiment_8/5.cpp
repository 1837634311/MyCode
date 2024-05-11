#include <iostream>
using namespace std;

int insert(int[], int, int);

int main() {
    int n, x, i, cnt = 0, arr[30] = { 0 };
    cout << "请输入原降序数列的数据个数（n<=20)："; cin >> n;
    cout << "请输入" << n << "个数（降序）：" << endl;
    // 获取数组的值
    for (i = 0; i < n; i++)
        cin >> arr[i];

label:
    cnt++;  // 以及记录插入的值的个数
    cout << "****************************************" << endl;
    cout << "请输入欲插入的第" << cnt << "个数："; cin >> x;
    cout << "插入在第" << insert(arr, n, x) << "个位置" << endl;
    n++;  // 扩大数组有效区间
    cout << "插入第" << cnt << "个数后数据序列为：" << endl;
    for (i = 0; i < n; i++)  // 输出数组
        cout << arr[i] << ' ';
    cout << endl;
    if (cnt == 1)  // 需要插入两个数，所以使用 goto 语句回到插入算法的开头
        goto label;
    return 0;

}

int insert(int a[], int n, int x) {
    int i = n;
    for (; i > 0; i--) {  // 查找插入值在数组中的位置
        if (a[i - 1] <= x)
            a[i] = a[i - 1];  // 没找到时，移动数组，腾出位置
        else
            break;
    }
    a[i] = x;
    return i + 1;
}