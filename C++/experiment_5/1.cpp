#include<iostream>
using namespace std;
int main() {
    cout << "2023114566-杨英杰-地质4" << endl;
    int i, n;
    cout << "请输入 n：";
    cin >> n;
    cout << n << "=";
    for (i = 2;i <= n;) {
        if (n % i == 0) { // 找到因子
            if (n != i) {
                // 如果n不等于i，则输出i，并将n除以i，以便继续检查n的其他因子
                cout << i << "*";
                n /= i;
            } else {
                // 如果n等于i，则直接输出i，并结束循环
                cout << i;
                break;
            }
        } else // 不是因子继续遍历
            i++;
    }
    return 0;
}