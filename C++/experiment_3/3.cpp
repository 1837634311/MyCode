#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float a, b;
    for (short i = 1;i <= 4;i++) {
        cout << "请输入天然气年使用量（立方米）：";
        cin >> a;
        if (a < 0) {
            cout << "数据输入错误！" << endl << endl;
            continue;    // 如果数据错误，跳出、进行下一轮循环
        } else if (a <= 360) {
            b = 2.02 * a;
        } else if (a <= 600) {
            b = 2.43 * (a - 360) + 727.2;
        } else {
            b = 3.04 * (a - 600) + 1310.4;
        }
        cout << fixed << setprecision(1) << "这一年天然气费用的总价为：" << b << endl << endl;
    }
    system("pause");
    return 0;
}
