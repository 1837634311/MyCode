#include <iostream>
using namespace std;

void putgraph(short);

int main() {
    short n;
    char mark;
    do {
        cout << "请输入图形的行数（1 ~ 9）：";
        cin >> n;
        putgraph(n);
        cout << "是否继续输出图形？请输入 Y 或 N :";
        cin >> mark;
        cout << endl;
    } while ((mark == 'y' || mark == 'Y'));
    return 0;
}

void putgraph(short n) {
    for (short i = 1; i <= n; i++) {
        for (short j = 1; j <= i - 1; j++) {
            cout << " ";
        }
        for (short j = 1; j <= 2 * (n - i) + 1; j++) {
            cout << i;
        }
        cout << endl;
    }
}