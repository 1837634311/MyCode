// 二分查找

#include <iostream>
using namespace std;
int main() {
    short n, i;
    float arr[20] = { 0 };
    cout << "请输入数组元素的个数n(n<=20)："; cin >> n;
    cout << "请按升序输入" << n << "个浮点数：" << endl;
    // 获取数组内元素的值
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "数组的中位数是：";
    // 判断中位数所在位置
    if (n % 2 == 0)
        cout << (arr[n / 2 - 1] + arr[n / 2]) / 2 << endl;
    else
        cout << arr[n / 2] << endl;
    return 0;
}
