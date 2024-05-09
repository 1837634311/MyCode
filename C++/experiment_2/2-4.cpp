#include <iostream>
using namespace std;
int main() {
    cout << "2023114566 杨英杰 地质4" << endl;

    short x, i = 1;
    for (;i <= 2;i++) {
        cout << "请输入一个整数：";
        cin >> x;
        if (x % 3 != 0) {    // 根据 x 的余数情况来判断是否能被整除。使用“不等于”判断。
            cout << x << " 不能被 3 整除" << endl;
        } else {
            cout << x << " 能被 3 整除" << endl;
        }
        if (x % 5 != 0) {
            cout << x << " 不能被 5 整除";
        } else {
            cout << x << " 能被 5 整除";
        }
        cout << endl << "———————————" << endl;
    }
    system("pause");
    return 0;
}
