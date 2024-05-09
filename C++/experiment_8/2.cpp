#include <iostream>
using namespace std;
int main() {
    cout << "2023114566-杨英杰-地质4" << endl;
    int n, flag, arr[20] = { 0 };
    cout << "请输入数组元素的个数n(n<=20)："; cin >> n;
    cout << "请按照降序输入" << n << "个元素：" << endl;
    // 获取数组内元素的值
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    do {
        int target, m, i = 0, j = n - 1, times = 0;
        cout << "**************************************************" << endl;
        cout << "请输入要查找的数据："; cin >> target;
        // 二分查找
        while (i <= j) {
            times++;  // 记录查找次数
            m = (i + (j - i) / 2);  // 中点
            if (arr[m] > target)  // 此情况说明 target 在区间 [m + 1, j] 中
                i = m + 1;
            else if (arr[m] < target)  // 此情况说明 target 在区间 [i, m - 1] 中
                j = m - 1;
            else {
                cout << "查找成功！该数在第" << m + 1 << "个位置" << endl;
                break;
            }
        }
        if (i > j)
            cout << "查无此数！" << endl;

        cout << "查找" << target << "总共比较：" << times << "次" << endl;
        cout << "如需继续查找请输入1，如需退出请输入其他整数："; cin >> flag;
    } while (flag == 1);

    return 0;
}
