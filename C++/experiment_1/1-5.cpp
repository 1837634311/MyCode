#include <iostream>
#include <math.h>
using namespace std;
int main() {
    cout << "2023114566 杨英杰 地质4" << endl;

    float m1, m2, r, F, G = 6.67e-11;
    cout << "请输入地球的质量：";
    cin >> m1;
    cout << "请输入月球的质量：";
    cin >> m2;
    cout << "请输入地月距离：";
    cin >> r;
    F = G * m1 * m2 / pow(r, 2);    // 计算万有引力
    // cout.precision(6);              // 设定输出精度，小数点后 5 位
    cout << "地球与月球之间的万有引力为：" << F << " N" << endl;
    return 0;
}