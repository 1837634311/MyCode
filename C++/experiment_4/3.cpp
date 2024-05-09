#include <iostream>
using namespace std;
int main() {
    cout << "2020110419郑兴宇" << endl;

    short m, n, count = 0;
    cout << "请输入整数范围 m 和 n：";
    cin >> m >> n;
    if (m > n) {    // 如果 m > n，调换m和n的位置，确保m在n的左边
        short temp = m;
        m = n;
        n = temp;
    }
    for (short x = m; x <= n; x++) {
        if (x % 3 == 2 && x % 5 == 1 && x % 7 == 4) {
            // 找出除以3余2、除以5余1、除以7余4的所有正整数
            cout << x << endl;
            count++;
        }
    }
    cout << "共有 " << count << " 个满足条件的整数" << endl;
    return 0;
}
