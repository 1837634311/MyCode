/*
已知有 const int M=1O; int x[M][M], m；要求：将按照如下规律自动生成的数据存放在x数组中，并输出如下图所示三角。
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int M = 10;
    int x[M][M] = { 0 };
    int m = 6;

    // 初始化矩阵
    for (int j = 0, cnt = 0; j < m; j++) {
        for (int i = 0; i < m - j; i++)
            x[i][j] = ++cnt;
    }

    // 输出矩阵
    for (int i = 0; i < m; i++) {
        // 控制输出的空格数
        for (int j = 0; j < i; j++)
            cout << setw(4) << ' ';
        // 控制输出的数字格式
        for (int j = 0; j < m - i; j++)
            if (j == 0)
                cout << setw(4) << x[i][j];
            else
                cout << setw(8) << x[i][j];
        cout << endl;
    }

    return 0;
}
