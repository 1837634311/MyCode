// 可逆素数

#include <iostream>
#include <ctime>
using namespace std;

int Inverse(short);
bool isPrime(short);

int main() {
    int n;
    cout << "请输入数据个数：";
    cin >> n;
    srand((unsigned int)time(NULL));
    cout << "随机产生的" << n << "个数中的可逆素数有：" << endl;
    for (int i = 1; i <= n; i++) {
        short num = 10 + rand() % 491;
        if (isPrime(num)) {
            short inverse = Inverse(num);
            if (isPrime(inverse))
                cout << num << endl;
        }
    }
    return 0;
}

int Inverse(short n) {
    int inverse = 0, digit;
    while (n != 0) {
        digit = n % 10;
        inverse = inverse * 10 + digit;
        n /= 10;
    }
    return inverse;
}

bool isPrime(short n) {
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
