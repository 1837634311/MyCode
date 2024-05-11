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
        bool flag = true;
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] < a[j + 1]) {
                swap(a[j], a[j + 1]);
                flag = false;
            }
        if (flag)
            break;
    }
}