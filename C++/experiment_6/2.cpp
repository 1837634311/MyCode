#include <iostream>
using namespace std;

double cos(double);

int main() {
    cout << "2023114566-杨英杰-地质4" << endl;
    cout << "请输入一个角度值：";
    double x;
    cin >> x;
    cout << "cos(" << x << ")=" << cos(x);
    return 0;
}

double cos(double x) {
    const float PI = 3.141593;
    double y, cosx = 1, term_cosx = 1;
    int sign = 1, n = 1;
    y = x * PI / 180;
    for (; term_cosx > 10e-7; n++) {
        sign = -sign; // 改变符号，实现正负项的交替相加
        term_cosx = term_cosx * y * y / ((2 * n - 1) * 2 * n); // 计算新项
        cosx += sign * term_cosx; // 计算余弦值
    }
    return cosx;
}