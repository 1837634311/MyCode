#include <iostream>
using namespace std;
int main() {
    float x, y;
    for (short i = 1;i <= 2;i++) {
        cout << "请输入 x 的值（实数）：";
        cin >> x;
        if (x < 10) {    // 判断 x 的大小，实现分支结构
            y = 2 * x;
        } else {        // 双分支结构
            y = x / 3 + 1;
        }
        cout << "y = " << y << endl;
        cout << "———————————" << endl;
    }
    system("pause");
    return 0;
}
