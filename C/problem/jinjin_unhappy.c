#include <stdio.h>
int main() {
    short school = 0, add = 0, i, all[7] = { 0 }, answer = 0, max;
    for (i = 0; i < 7; i++) {
        scanf("%hd%hd", &school, &add);
        all[i] = school + add;
    }
    max = all[0];
    for (i = 1; i < 7; i++) {
        if (all[i] >= 8)
            if (all[i] > max) {
                max = all[i];
                answer = i + 1;
            }
    }
    printf("%hd", answer);
    return 0;
}