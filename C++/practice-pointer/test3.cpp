/*  随机产生n个值在[10,50]之内的数组元素，从键盘输入循环左移的位数，实现数组元素循环左移m位；
在循环左移的结果基础上，再输入循环右移的位数并实现循环右移，

 【输出】
 请输入数组的实际长度：10
 随机产生的10个数组元素为：41 45 20 23 25 41 38 18 10 12
 请输入循环左移的位数：3
 循环左移的结果为：23 25 41 38 18 10 12  41 45 20
 请输入循环右移的位数：4
 循环右移的结果为：12  41 45 20  23 25 41 38 18 10
*/
#include<iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void InitArry(int* p, int n);              //初始化数组
void cir_LeftMove(int* p, int n, int m);    //循环左移m位
void cir_RightMove(int* p, int n, int m);    //循环右移m位
void OutArry(int* p, int n);               //输出数组元素
int main() {
    const int N = 20;
    int a[N], n, m;
    cout << "请输入数组的实际长度：";
    cin >> n;
    cout << "随机产生的" << n << "个数组元素为：";
    InitArry(a, n);           //调用函数，初始化数组，产生随机数元素
    OutArry(a, n);           //调用函数，输出数组
    cout << "请输入循环左移的位数：";
    cin >> m;
    cir_LeftMove(a, n, m);   //调用函数，循环左移m位
    cout << "循环左移的结果为：";
    OutArry(a, n);          //调用函数，输出移动后的结果
    cout << "请输入循环右移的位数：";
    cin >> m;
    cir_RightMove(a, n, m);   //调用函数，循环右移m位
    cout << "循环右移的结果为：";
    OutArry(a, n);          //调用函数，输出移动后的结果
    return 0;
}

void InitArry(int* p, int n) {
    int i;
    srand(time(NULL));
    for (i = 0;i < n;i++)
        p[i] = 10 + rand() % (50 - 10 + 1);
}
void cir_LeftMove(int* p, int n, int m) {
    int i, t;
    /*************Program************/
    // 因为循环移动数组元素在前面实验报告完成过，所以本题采用新的写法
    // 事先说明，不能自定义变量和函数、引入头文件，用这种办法写起来实在过于折磨，本题仅为整活
    // 本题的算法为轮转数组中的翻转数组
    for (i = 0; i < (m % n) / 2; i++) {
        t = p[m % n - 1 - i];
        p[m % n - 1 - i] = p[i];
        p[i] = t;
    }

    for (i = m % n; i < (n + m % n) / 2; i++) {
        t = p[n - 1 - i + m % n];
        p[n - 1 - i + m % n] = p[i];
        p[i] = t;
    }

    for (i = 0; i < n / 2; i++) {
        t = p[n - 1 - i];
        p[n - 1 - i] = p[i];
        p[i] = t;
    }
    /*************End************/
}
void cir_RightMove(int* p, int n, int m) {
    int* q, t;
    /*************Program************/
    // 我不知道 *q 是用来做什么的，但还是用上吧。另外，实在没变量可用了（抛开数组内没使用的部分），就用了 swap 。
    t = m % n;
    q = &m;
    for (*q = 0; *q < n / 2; (*q)++)
        swap(p[n - 1 - *q], p[*q]);

    for (*q = 0; *q < t / 2; (*q)++)
        swap(p[t - 1 - *q], p[*q]);

    for (*q = t; *q < (n + t) / 2; (*q)++)
        swap(p[n - 1 - *q + t], p[*q]);
    /*************End************/
}
void OutArry(int* p, int n) {
    int i;
    for (i = 0;i < n;i++)
        cout << setw(4) << p[i];
    cout << endl;
}