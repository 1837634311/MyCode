#include <iostream>
using namespace std;
int main() {
    int num_2, num_10 = 0, c = 1;
    cout << "请输入一个二进制整数：";
    cin >> num_2;
    do {
        num_10 += num_2 % 10 * c;	// 累加计算数值
        num_2 /= 10;	// 移除num_2的最后一个数字
        c *= 2;	// 更新位权
    } while (num_2 > 0);	// 当num_2变为0时，循环结束
    cout << "转换为10进制是：" << num_10 << endl;
    return 0;
}
