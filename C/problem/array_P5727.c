#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int nums[n], len = 1;
    nums[0] = n;
    while (n != 1) {
        n = n % 2 ? n * 3 + 1 : n / 2;
        nums[len++] = n;
    }
    len -= 1;
    while (len >= 0)
        printf("%d ", nums[len--]);
    return 0;
}