#ifndef CLOCK_H
#define CLOCK_H

#include <time.h>
#include <stdio.h>

clock_t beginTime;

void begin(void) {
    beginTime = clock();
}

void time(void) {
    clock_t endTime = clock();
    double time = (double)(endTime - beginTime) / CLOCKS_PER_SEC * 1000;
    printf("耗时：%hdms", (short)time);
}

#endif // CLOCK_H