#include <stdio.h>
void insertSort(int*, int, int);
int main(void) {
    int nums[10] = { 0 }, size, order;
    printf("请输入需要排列的数的个数（不大于10）：");
    scanf("%d", &size);
    printf("请输入需要排列的数：\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &nums[i]);
    printf("请输入排序顺序，输入 1 从小到大排序，输入 2 从大到小排序：");
    scanf("%d", &order);
    insertSort(nums, size, order);
    printf("排序后的数据：\n");
    for (int i = 0; i < size; i++)
        printf("%d ", nums[i]);
    return 0;
}

#define compare(a, b, order) ((order == 1) ? (a > b) : (a < b))
void insertSort(int* arr, int size, int order) {
    for (int i = 1; i < size; i++) {
        int base = arr[i], j = i - 1;
        while (j >= 0 && compare(arr[j], base, order)) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = base;
    }
}