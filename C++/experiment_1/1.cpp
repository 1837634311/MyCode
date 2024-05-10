#include <iostream>
using namespace std;
int main() {
    cout << "2023114566 杨英杰 地质4" << endl;

    float a, b, c;
    cout << "请输入某人的体重（公斤）：";
    cin >> a;         // 获取体重
    cout << "请输入此人的体重（米）：";
    cin >> b;         // 获取身高
    c = a / b / b;    // 计算 BMI
    cout << "此人的身体质量指数为：" << c << " kg/m^2" << endl;
    return 0;
}