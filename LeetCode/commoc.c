#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1, ans = numsSize;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (target <= nums[mid]) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return ans;
}

int main() {
    int a = 7, b = 0, ans;
    double c = 2, d = 0;
    int arr[4] = { 1, 3, 5, 6 };
    printf("%d", searchInsert(arr, 4, a));
    return 0;
}