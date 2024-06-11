#include <stdio.h>
#include <stdlib.h>

void reverse(int* nums, int begin, int size) {
    // i 控制翻转的起始位置，cnt 控制翻转的次数
    for (int i = begin, cnt = 0; cnt < (size - begin) / 2; i++, cnt++) {
        int temp = nums[i];
        nums[i] = nums[size - 1 - cnt];
        nums[size - 1 - cnt] = temp;
    }
}

void rotate(int* nums, int numsSize, int k) {
    reverse(nums, 0, numsSize);
    reverse(nums, 0, k % numsSize);
    reverse(nums, k % numsSize, numsSize);
}

int main() {
    int a = 7, b = 0, ans;
    double c = 2, d = 0;
    int arr[7] = { 1, 2, 3, 4, 5, 6, 7 };
    rotate(arr, 7, 2);
    for (int i = 0; i < 7; i++)
        printf("%d ", arr[i]);
    return 0;
}