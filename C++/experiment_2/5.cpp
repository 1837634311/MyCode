#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float x, y, z, A = 7.3;
    cout << fixed << setprecision(2);    // 设置小数位数为 2
    for (short i = 1;i <= 3;i++) {
        cout << "请输入 A 商品数量：";
        cin >> x;
        if (x < 0) {    // 三分支结构
            cout << "A 商品输入数量错误！" << endl;
            goto div;    // 跳转到下方 div 行。不建议轻易使用。
        } else if (x >= 20) {
            z = x * A * 0.8;
        } else {
            z = x * A;
        }
        cout << "商品总金额为 " << z << endl;
        cout << "请输入付款金额：";
        cin >> y;
        cout << "找零金额为 " << y - z << endl;
    div: cout << "———————————" << endl;
    }
    system("pause");
    return 0;
}
