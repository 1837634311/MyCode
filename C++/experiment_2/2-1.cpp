#include <iostream>
using namespace std;
int main() {
    cout << "2023114566 杨英杰 地质4" << endl;

    short a, b, temp, i = 1;
    for (;i <= 2;i++) {      // 循环结构，便于在一个终端窗口中完成任务（截图方便省空间）
        cout << "请输入两个整数：";
        cin >> a >> b;
        if (a > b) {        // 单分支结构，判断 a b 的大小
            temp = a;
            a = b;
            b = temp;     // 通过一个中间变量来交换 a b 的值
        }
        cout << "较小数为 " << a << endl << "较大数为 " << b << endl;
        cout << "———————————" << endl;
    }
    system("pause");
    return 0;
}
