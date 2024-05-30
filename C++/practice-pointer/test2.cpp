/* 【编程实现】:有整数集合a、b，它们的元素是无序的，
1. 求集合a、b的交集c(既在集合a中又在集合b中的元素构成的集合)。
2. 求集合a、b的并集c(由属于a或属于b的所有元素所组成的集合)。
3. 求集合a、b的差集c(属于a而不属于b的所有元素所组成的集合)。

输入数组a的长度：5
数组a的元素：1 2 7 9 5
输入数组b的长度：8
数组b的元素： 2 15 6 9 8 12 7 10
数组a和数组b的交集为： 2 7 9
数组a和数组b的并集为： 1 2 7 9 5 15 6 8 12 10
数组a和数组b的差集为： 1 5
*/

#include<iostream>
#include <iomanip>
using namespace std;
int Intersec(int* pa, int n1, int* pb, int n2, int* pc);
int Union(int* pa, int n1, int* pb, int n2, int* pc);
int Difference(int* pa, int n1, int* pb, int n2, int* pc);
void InputArray(int* p, int n);
void OutputArray(int* p, int n);

int main() {
    const int N = 20;
    int a[N], b[N], c[N], i, n1, n2, n3;
    cout << "请输入数组a的长度:";
    cin >> n1;
    cout << "请输入数组a的" << n1 << "个元素：";
    InputArray(a, n1);
    cout << "请输入数组b的长度:";
    cin >> n2;
    cout << "请输入数组b的" << n2 << "个元素：";
    InputArray(b, n2);
    n3 = Intersec(a, n1, b, n2, c);
    cout << "数组a和数组b的交集为：" << endl;
    OutputArray(c, n3);
    n3 = Union(a, n1, b, n2, c);
    cout << "数组a和数组b的并集为：" << endl;
    OutputArray(c, n3);
    n3 = Difference(a, n1, b, n2, c);
    cout << "数组a和数组b的差集为：" << endl;
    OutputArray(c, n3);
    return 0;
}
void InputArray(int* p, int n) {
    int i;
    for (i = 0;i < n;i++)
        cin >> p[i];
}
void OutputArray(int* p, int n) {
    int i;
    for (i = 0;i < n;i++)
        cout << setw(4) << *(p + i);
    cout << endl;
}

int Intersec(int* pa, int n1, int* pb, int n2, int* pc) {
    int i, j, n3 = 0;
    /*************Program************/
    for (i = 0; i < n1; i++)
        for (j = 0; j < n2; j++)
            if (pa[i] == pb[j])
                pc[n3++] = pa[i];
    /*************End************/
    return n3;
}
int Union(int* pa, int n1, int* pb, int n2, int* pc) {
    int i, j, n3 = 0;
    /*************Program************/
    // 求 a 和 b 的并集
    for (i = 0; i < n1; i++)
        pc[n3++] = pa[i];
    for (j = 0; j < n2; j++) {
        for (i = 0; i < n1; i++)
            if (pb[j] == pa[i])
                break;
        if (i == n1)
            pc[n3++] = pb[j];
    }
    /*************End************/
    return n3;
}
int Difference(int* pa, int n1, int* pb, int n2, int* pc) {
    int i, j, n3 = 0;
    /*************Program************/
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++)
            if (pa[i] == pb[j])
                break;
        if (j == n2)
            pc[n3++] = pa[i];
    }
    /*************End************/
    return n3;
}
