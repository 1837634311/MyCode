/* 从键盘输入数据序列，保存在一维数组中，将该数组的元素逆序存放并输出。
思路：将第1个元素和最后一个元素交换；第2个元素与倒数第2个元素交换；.....所有对应的元素交换完毕，则实现该数组的逆序存放

请输入数组实际长度：10                                             请输入数组实际长度：7
请输入数组的10个元素：12 3 90 8 7 5 4 10 34 2                      请输入数组的7个元素：12 3 90 8 7 5 4
数组逆序存放的结果为：2 34 10 4 5 7 8 90 3 12                      数组逆序存放的结果为：4 5 7 8 90 3 12
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const int  N = 10;
    int a[N], i, j, n, t;
    cout << "请输入数组实际长度：";
    cin >> n;
    cout << "请输入数组的" << n << "个元素：" << endl;
    for (i = 0;i < n;i++)
        cin >> a[i];
    /******************Program********************/
    for (i = 0, j = n - 1; i < j; i++, j--) {
        swap(a[i], a[j]);
    }
    /*******************End***********************/
    cout << "数组逆序存放的结果为：" << endl;
    for (i = 0;i < n;i++)
        cout << setw(4) << a[i];
    cout << endl;
    return 0;
}