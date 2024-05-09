#include <iostream>
using namespace std;
int main() {
    cout << "2023114566 杨英杰 地质4" << endl;

    char x;
    cout << "请输入一个小写英文字母：";
    cin >> x;     // 输入字符常量
    int y = x;    // 将输入的字母转化为 ACSII 码
    cout << "英文字母 " << x << " 的 ASCII 码是 " << y;
    cout << "，是 26 个英文字母中的第 " << y - 96 << " 个字母。";
    // ACSII 码从 97 开始为小写字母

    return 0;
}
