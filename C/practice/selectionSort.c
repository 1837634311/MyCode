#include <stdio.h>
void selectionSort(int*, int, int);
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
    selectionSort(nums, size, order);
    printf("排序后的数据：\n");
    for (int i = 0; i < size; i++)
        printf("%d ", nums[i]);
    return 0;
}

#define compare(a, b, order) ((order == 1) ? (a < b) : (a > b))
void selectionSort(int* arr, int size, int order) {
    for (int i = 0; i < size - 1; i++) {
        int max = i;
        for (int j = i + 1; j < size; j++)
            if (compare(arr[j], arr[max], order))
                max = j;
        swap(&arr[i], &arr[max]);
    }
}

void swap(int* a, int* b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}
