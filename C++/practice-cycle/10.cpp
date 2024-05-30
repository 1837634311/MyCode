/*  用递推法计算斐波那契数列的第n项。
问题分析：斐波拉契数列中每个数是前两个数之和，而数列的最初两个数都是1。
若设 F0=1, F1=1, F2=2, F3=3, F4=5, F5=8, ...
则：当n＞1时, Fn+2 = Fn+1 + Fn, 且 F0=F1=1。

编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、编程时，只能使用已定义的变量
3、程序只能使用规定的结构，本题要求用嵌套的for循环实现。
*/

#include<iostream>
using namespace std;
int main()
{
    int i, n, f1 = 1, f2 = 1, f3;
    cout << "要计算斐波那契数列的前几项：";
    cin >> n;
    /*************************Program***************************/
    for (i = 3; i <= n; i++) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    /*************************End***************************/
    cout << "第" << n << "项为：" << f3 << endl;
    return 0;
}