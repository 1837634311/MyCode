#include <iostream>
using namespace std;
int main() {
    cout << "2020110419郑兴宇" << endl;

    short i = 0;
    float value = 100.0, rate;
    cout << "请输入年增长率：";
    cin >> rate;
    do {
        i++;
        value *= (1 + rate);
        cout << i << "年后的产值为" << value << endl;
    } while (value < 200);
    cout << "需要 " << i << " 年" << endl;
    return 0;
}
