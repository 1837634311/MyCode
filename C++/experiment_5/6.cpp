#include <iostream>
using namespace std;
int main() {
    int n, w, result, choice;
    char mark;
    do {
        cout << "************进制转换系统****************" << endl;
        cout << " 1. 十进制转二进制       2. 二进制转十进制" << endl;
        cout << "请选择转换方式（1/2):";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "请输入需要转换的十进制数：";
            cin >> n;
            result = 0;  // 初始化结果和权重
            w = 1;
            while (n != 0) {
                result += (n % 2) * w; // 将 n 的最后一位（二进制）转换为十进制，并加到结果中
                n /= 2; // 去掉 n 的最后一位
                w *= 10; // 更新权重，使其适用于下一位
            }
            break;
        case 2:
            cout << "请输入需要转换的二进制数：";
            cin >> n;
            result = 0;  // 初始化结果和权重
            w = 1;
            while (n != 0) {
                result += (n % 10) * w; // 位权法处理结果
                n /= 10; // 移除当前处理的位
                w *= 2; // 更新权重，使其适用于下一位
            }
            break;
        }
        cout << "转换之和的结果为：" << result << endl;
        cout << "是否继续进行转换（Y/N):";
        cin >> mark;
    } while (mark == 'y' || mark == 'Y');
    return 0;
}