/*从键盘输入n，自动输出斐波拉契数列前n项的值。输出各项的值，每行输出5个元素，数据的输出格式设置为：setw(4)

【输出】
请输入数组实际长度：13                                      请输入数组实际长度：10
斐波拉契数列数列前13项的值分别为：                          斐波拉契数列数列前10项的值分别为：
  1   1   2   3   5                                            1   1   2   3   5
  8  13  21  34  55                                            8  13  21  34  55
 89 144 233
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const int  N = 20;
    int Fib[N] = { 1,1 }, i, j, n, cnt = 0;
    cout << "请输入数组实际长度：";
    cin >> n;
    cout << "斐波拉契数列数列前" << n << "项的值分别为：" << endl;
    /******************Program********************/
    for (i = 2; i < n; i++)
        Fib[i] = Fib[i - 1] + Fib[i - 2];

    for (i = 0; i < n; i++)
        if ((i + 1) % 5 == 0 && i != n - 1)
            cout << setw(4) << Fib[i] << endl;
        else
            cout << setw(4) << Fib[i];
    /*******************End***********************/
    return 0;
}