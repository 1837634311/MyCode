// 求特定素数

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
    cout << "2023114566-杨英杰-地质4" << endl;
    int m, n, i, j, sum = 0, sum_no_6 = 0;
    cout << "请输入范围正整数m和n:";
    cin >> m >> n;
    if (m > n)
        swap(m, n);

    if (m % 2 == 0) i = m - 1;
    else i = m;
    for (; i <= n; i += 2) {
        for (j = 2; j <= sqrt((float)i); j++)    // 素数一定小于它的平方根
            // sqrt 函数有几种浮点重载形式，但没有整数形式，需要显式转换
            if (i % j == 0)    // 若i能被j整除，则i不是素数，跳出本轮循环
                break;
        if (j > sqrt((float)i)) {    // 循环结束，说明i是素数
            if (i % 10 == 3 || i % 10 == 7) {
                cout << left << setw(4) << i;
                sum += i;
                if (i / 10 % 10 == 6)    // 若i的十位数为6，则不计数
                    continue;

                sum_no_6 += i;
            }
        }
    }
    cout << endl << "满足条件且十位数为3或7的素数和是：" << sum << endl;
    cout << "满足条件且十位数不为6的素数和是：" << sum_no_6 << endl;
    return 0;
}