/*  编程实现：求自然对数e的值，e=1+1/1!+1/2!+1/3!+…+1/n!  当通项1/n!的值小于10-8时停止计算
编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、编程时，只能使用已定义的变量
3、程序只能使用规定的结构，本题要求循环用do-while语句实现。
【输出】
e=2.7183
*/

#include<iostream>
using namespace std;
int main()
{
    int i = 1;
    double t = 1, sum = 1.0;
    /*************************Program***************************/
    for (; 1 / t > 1e-8; i++) {
        t *= i;
        sum += 1.0 / t;
    }
    /*************************End***************************/
    cout << fixed;
    cout.precision(4);
    cout << "e=" << sum << endl;
    return 0;
}