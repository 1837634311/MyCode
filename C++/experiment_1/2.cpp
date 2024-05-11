#include <iostream>
using namespace std;
int main() {
    short n;
    cout << "请输入分钟数 n ：";
    cin >> n;
    if (n % 60 != 0) {    // 判断是否是为整点
        cout << n << " 分钟可换算为：" << n / 60 << " 小时 " << n % 60 << " 分钟。";
    } else {
        cout << n << " 分钟可换算为：" << n / 60 << " 小时";
    }
    return 0;
}