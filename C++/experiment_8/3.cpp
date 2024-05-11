#include <iostream>
using namespace std;

double count(double[], int);

int main() {
    int n, i, num = 0;
    double arr[40];
    cout << "请输入学生人数n(n<=40)："; cin >> n;
    cout << "请输入" << n << "个学生的《程序设计》成绩：" << endl;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "《程序设计》课程的及格率为：" << count(arr, n) << '%' << endl;
    return 0;
}
double count(double score[], int n) {
    double num = 0;
    for (int i = 0; i < n; i++)
        if (score[i] >= 60)
            num++;
    return 100 * num / n;
}
