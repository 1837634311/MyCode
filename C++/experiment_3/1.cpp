#include <iostream>
using namespace std;
int main() {
    float a, b, c;
    cout.precision(4);    // 设置输出的小数位数
    for (short i = 1;i <= 2;i++) {    // 循环结构，便于在一个终端窗口中完成任务（截图方便省空间）
        cout << "请输入某人的体重（公斤）：";
        cin >> a;
        cout << "请输入某人的身高（厘米）：";
        cin >> b;
        c = a / b / b * 10000;    // 计算 BMI
        cout << "BMI = " << c << ",";
        if (c < 18.5) {
            cout << "偏瘦！";
        } else if (c < 24) {
            cout << "正常！";
        } else if (c < 27) {
            cout << " 偏胖！";
        } else if (c < 30) {
            cout << " 肥胖！";
        } else if (c < 40) {
            cout << " 重度肥胖！";
        } else {
            cout << " 极重度肥胖！";
        }
        cout << endl << endl;
    }
    system("pause");
    return 0;
}
