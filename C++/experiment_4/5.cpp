#include <iostream>
using namespace std;
int main() {
    cout << "2020110419郑兴宇" << endl;

    short i = 0, n;
    cout << "请输入西瓜总数：";
    cin >> n;
    do {
        i++;
        if (n % 2 == 1) n += 1;    // 防止出现奇数个西瓜，出现浮点数
        n = n / 2 - 2;
        if (n < 0) n = 0;
        cout << "第 " << i << " 天剩下：" << n << " 个" << endl;
    } while (n != 0);
    cout << "需要 " << i << " 天卖完。" << endl;
    return 0;
}