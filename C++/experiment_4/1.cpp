#include <iostream>
using namespace std;
int main() {
    cout << "2020110419郑兴宇" << endl;
    short n, odd = 0, even = 0;
    cout << "请输入一系列正整数（输入0或负数表示阶数）：" << endl;
    cin >> n;
    while (n > 0) {
        if (n % 2 == 0) even++;
        else odd++;
        cin >> n;
    }
    cout << "奇数个数：" << odd << endl;
    cout << "偶数个数：" << even << endl;
    return 0;
}
