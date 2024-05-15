/*
对输入的一串信息（可包含空格）进行加密处理。
加密规则如下：将字母表看成首尾衔接的闭合环，对信息中的字母，用该字母前的第5个字母进行替换；
对信息中的非字母，不做处理，原样输出。
要求：使用string变量存放字符串，
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "请输入要加密的信息：" << endl;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++) {
        if (('A' + 5 <= str[i] && str[i] <= 'Z') || ('a' + 5 <= str[i] && str[i] <= 'z'))
            str[i] -= 5;
        else if (('A' <= str[i] && str[i] <= 'A' + 5) || ('a' <= str[i] && str[i] <= 'a' + 5))
            str[i] += 26 - 5;
    }
    cout << "加密后的信息为：" << endl << str << endl;
    return 0;
}