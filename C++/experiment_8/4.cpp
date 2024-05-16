#include <iostream>
#include <iomanip>
using namespace std;

void sort(int[], int);

int main() {
    int size, i, arr[20] = { 0 };
    cout << "请输入数组的实际长度："; cin >> size;
    cout << "请输入" << size << "个数组元素：" << endl;
    // 获取数组的值
    for (i = 0; i < size; i++)
        cin >> arr[i];
    // 冒泡降序排序
    sort(arr, size);
    // 输出数组
    cout << "排序后的结果为：" << endl;
    for (i = 0; i < size; i++)
        cout << setw(4) << arr[i];
    cout << endl;
    return 0;
}

void sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool flag = true;  // 设置一个值，用来判断在一轮循环中是否排序。若没有，则说明数组有序，结束循环。
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] < a[j + 1]) {  // 如果前面的数比后面小，则
                swap(a[j], a[j + 1]);  // 交换元素
                flag = false;
            }
        if (flag)
            break;
    }
}