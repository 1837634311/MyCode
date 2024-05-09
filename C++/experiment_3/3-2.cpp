#include <iostream>
using namespace std;
int main() {
    cout << "2023114566 杨英杰 地质4" << endl;

    short a, b, c;
    for (short i = 1;i <= 2;i++) {
        cout << "请输入三角形的三条边长：";
        cin >> a >> b >> c;
        if (a > b) {
            swap(a, b);
        }
        if (a > c) {
            swap(a, c);
        }
        if (b > c) {
            swap(b, c);
        }    // 简单的三个数排序算法，如果大于就交换，使a b c 以从小到大的顺序排列
        if (a + b > c) {
            if (a == c) {    // 最小的边长 = 最大的边长，即为等边三角形
                cout << "可以构成等边三角形";
            } else if (a == b) {    // 两条短边相等，即为等腰三角形
                cout << "可以构成等腰三角形";
            } else {
                cout << "可以构成一般三角形";
            }
        } else cout << "不能构成三角形";
        cout << endl << endl;
    }
    system("pause");
    return 0;
}
