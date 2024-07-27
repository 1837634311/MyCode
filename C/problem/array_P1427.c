#include <stdio.h>
int main() {
    int length = 0, nums[100];
    do {
        scanf("%d", &nums[length++]);
    } while (nums[length - 1]);
    for (int i = length - 2; i >= 0; i--)
        printf("%d ", nums[i]);

    return 0;
}