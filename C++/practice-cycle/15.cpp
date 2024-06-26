/*  用辗转相除法求两个正整数的最大公约数及最小公倍数。

编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、编程时，只能使用已定义的变量
3、程序只能使用规定的结构，本题要求循环用do-while语句实现。

【输出】
请输入两个正整数：12 24                   请输入两个正整数：3 22
最大公约数为：4                           最大公约数为：1
最小公倍数为：24                          最小公倍数为：66
*/
#include<iostream>
using namespace std;
int main()
{
    int p, q, r, m, n;
    cout << "请输入两个正整数：";
    cin >> p >> q;
    /*************************Program***************************/
    m = p;
    n = q;
    do {    // 辗转相除法求最大公约数
        r = m % n; // 求余数
        m = n;     // 除数作为下次循环的被除数
        n = r;     // 余数作下次循环的除数
    } while (n != 0);
    cout << "最大公约数为：" << m << endl;
    cout << "最小公倍数为：" << p * q / m;
    // 最小公倍数 = 两个数相乘 / 最大公约数
    /*************************End***************************/
    return 0;
}
