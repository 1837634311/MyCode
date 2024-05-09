// 玫瑰花数

#include <iostream>
#include <cmath>
using namespace std;

bool judge(short);

int main() {
    cout << "2023114566-杨英杰-地质4" << endl;
    cout << "玫瑰花数有" << endl;
    for (short i = 1000; i < 10000; i++) {
        if (judge(i))
            cout << i << endl;
    }
    return 0;
}

bool judge(short i) {
    short sum = 0, j = i;
    while (j != 0) {
        sum += pow((float)(j % 10), 4);
        j /= 10;
    }
    return (sum == i);
}