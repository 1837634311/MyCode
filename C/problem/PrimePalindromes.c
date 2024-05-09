#include <stdio.h>

short digit(int);
short prime(int);
short palindrome(int);

int main() {
    int m, n, i;
    scanf("%d %d", &m, &n);
    if (m % 2 == 0) i = m + 1;  // 因为数据集不小于 5，所以不考虑 2 的情况
    else i = m;
    for (; i <= n; i += 2) {
        if (digit(i)) continue;
        if (!palindrome(i)) continue;
        if (prime(i))
            printf("%d\n", i);
    }
    return 0;
}

short digit(int i) {
    return ((1000 <= i && i <= 9999) || (100000 <= i && i <= 999999) || i >= 10000000);
}

short prime(int i) {
    if (i == 2) return 1;
    for (int j = 2; j <= i / j; j++)
        if (i % j == 0) return 0;
    return 1;
}

short palindrome(int num) {
    int temp, invers_num = 0;
    for (temp = num; temp > 0; temp /= 10)
        invers_num = invers_num * 10 + temp % 10;
    return num == invers_num;
}
