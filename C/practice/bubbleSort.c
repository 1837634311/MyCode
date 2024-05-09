#include <stdio.h>
void bubbleSort(int*, int, int);
void swap(int*, int*);
int main(void) {
    int nums[10] = { 0 }, size, order;
    printf("请输入需要排列的数的个数（不大于10）：");
    scanf("%d", &size);
    printf("请输入需要排列的数：\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &nums[i]);
    printf("请输入排序顺序，输入 1 从小到大排序，输入 2 从大到小排序：");
    scanf("%d", &order);
    bubbleSort(nums, size, order);
    printf("排序后的数据：\n");
    for (int i = 0; i < size; i++)
        printf("%d ", nums[i]);
    return 0;
}

#define compare(a, b, order) ((order == 1) ? (a > b) : (a < b))
#define bool short
#define true 1
#define false 0
void bubbleSort(int* arr, int size, int order) {
    for (int i = 0; i < size - 1; i++) {
        bool flag = true;
        for (int j = 0; j < size - i - 1; j++)
            if (compare(arr[j], arr[j + 1], order)) {
                swap(&arr[j], &arr[j + 1]);
                flag = false;
            }
        if (flag)
            break;
    }
}

void swap(int* a, int* b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}