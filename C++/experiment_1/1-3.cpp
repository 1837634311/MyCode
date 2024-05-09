#include <iostream>
#include <math.h>
using namespace std;
int main() {
    cout << "2023114566 杨英杰 地质4" << endl;

    float a;
    cout << "请输入存款本金（元）：";
    cin >> a;
    a = a * (1 + 0.034 * 3);    // 计算三年后的本息和
    cout.precision(7);          // 设置输出精度，只适用于五位数和两位小数的情况
    cout << "三年后存款的本息和为：" << a << " 元。";
    return 0;
}