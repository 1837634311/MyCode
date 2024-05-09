#include <stdio.h>
#include <stdlib.h>
#include "../head/clock.h"
#define bool short
#define true 0  // 因为 0 才能初始化 isPrime 数组，而 1 不行
#define false 1


int main() {
    const int size = 10 + 1;
    bool* isPrime = (bool*)calloc(size, sizeof(bool));
    int* primes = (int*)malloc(size / 5 * sizeof(bool));    // 数据越大，质数数组的空间可以设置得越小
    int cnt = 0;
    begin();
    for (int i = 2; i <= size; i++) {
        // 从 2 开始，将从原始数据中找到质数，添加到质数数组中，并计数
        // 质数数组里，质数的位置不需要与原始数据对应，所以从 0 开始按顺序存储
        if (isPrime[i] == true)
            primes[cnt++] = i;

        // primes[j] 就是质数，primes[j] * i <= size 保证质数的倍数不超过界限
        for (int j = 0; primes[j] * i <= size; j++) {
            isPrime[primes[j] * i] = false;
            // 欧拉筛法的核心，合数应该被其最小质因子筛掉，从而避免多次标记
            // 当一个合数 i 遇到了它的质因数时，则它们二者之中并没有它们乘积的最小质因数，于是跳出循环
            if (i % primes[j] == 0) break;
        }
    }
    // 开始输出质数，直到 cnt
    for (int i = 0; i < cnt; i++)
        printf("%d\n", primes[i]);
    // printf("共有%d个质数\n", cnt);
    time();
    return 0;
}
