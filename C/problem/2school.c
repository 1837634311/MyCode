#include <stdio.h>
int main() {
    short s, v, time, hour, minute, H, M;
    scanf("%hd %hd", &s, &v);
    time = 10 + ((s % v == 0) ? s / v : s / v + 1);
    hour = time / 60;
    minute = time % 60;
    if (hour >= 9)
        H = 32 - hour;
    else
        H = 8 - hour;
    if (minute > 0)
        H -= 1;

    M = (minute == 0) ? minute : 60 - minute;
    printf("%02hd:%02hd", H, M);
    return 0;
}