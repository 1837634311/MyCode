#include <iostream>
using namespace std;
int main() {
    cout << "2023114566 杨英杰 地质4" << endl;

    short y, m, d, counts = 0;
    cout << "请分别输入年月日：";
    cin >> y >> m >> d;

    short days[11] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };
    /* 数组，存放每月的天数。不会遇到需要加12月的情况，因为后面的逻辑是：
    当月不会加当月的天数，而是加输入的天数。而12月的下一个月是次年1月。*/
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
        days[1] = 29;    // 闰月时二月天数 +1
    }
    for (short i = 0; i < m - 1; i++) {
        counts += *(days + i);    // 遍历数组，累加总天数
    }
    counts += d;    //过往月份天数加上本月天数，就是距今年的第几天

    cout << "这是 " << y << " 年的第 " << counts << " 天" << endl;
    switch (counts % 5) {    // 通过总天数 / 5 的余数判断“打鱼”还是“晒网”
    case 1: case 2: case 3:
        cout << "这一天在打鱼" << endl;
        break;
    case 4: case 5:
        cout << "这一天在晒网" << endl;
    }
    //system("pause");
    return 0;
}