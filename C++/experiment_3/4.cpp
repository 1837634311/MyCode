#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "请输入月份：";
    cin >> a;
    if (a < 0 || a > 12) {
        cout << "月份输入错误";
        return 0;
    } else if (a < 3 || a > 11) {
        b = 3;
    } else if (a < 6) {
        b = 0;
    } else if (a < 9) {
        b = 1;
    } else {
        b = 2;
    }
    cout << a << " 月处于";
    switch (b) {
    case 0:
        cout << "春季" << endl;
        break;
    case 1:
        cout << "夏季" << endl;
        break;
    case 2:
        cout << "秋季" << endl;
        break;
    case 3:
        cout << "冬季" << endl;
    }
    system("pause");
    return 0;
}
