/* 定义了二维数组 int a[N][N]，则其主对角线元素可表示为 a[i][i], 次对角线元素可表示为 a[i][N-1-i]。
输出二维数组的主对角线，然后将主对角线元素与该行的最大值交换。
【类似问题】：将每行的最小值和次对角线元素交换；将每列的最大值和主对角线交换；将每列的最小值和次对角线交换；
              将每行（每列）最大值（最小值）和第1行（第1列）交换等等
【核心问题】：找行、列的最大、最小值；主对角线和次对角线元素的表示；指定元素交换

【输出】
矩阵：              每行最大值与主对角线元素交换后的结果
3  5  4  8  16      16  5   4   8   3
6  9  10 3  1       6   10  9   3   1
5  8  2  1  0       5   2   8   1   0
23 1  9  5  4       5   1   9   23  4
3  45 7  6  10      3   10  7   6   45
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int N = 5;
    int a[N][N] = { {3,5,4,8,16},{6,9,10,3,1},{5,8,2,1,0},{23,1,9,5,4},{3,45,7,6,10} };
    int i, j;
    cout << "二维数组：" << endl;
    for (i = 0;i < N;i++) {
        for (j = 0;j < N;j++)
            cout << setw(4) << a[i][j];
        cout << endl;                    //换行输出下一行
    }

    //将主对角线元素和该行最大值交换
    /*************Program**************/
    for (i = 0; i < N; i++) {
        int max = 0;
        for (j = 0; j < N; j++)
            if (a[i][j] > a[i][max])
                max = j;
        swap(a[i][max], a[i][i]);
    }
    /****************End***************/
    cout << "主对角线元素与该行最大值交换后：" << endl;
    for (i = 0;i < N;i++) {
        for (j = 0;j < N;j++)
            cout << setw(4) << a[i][j];
        cout << endl;                            //换行输出下一行		                                              
    }
    return 0;
}