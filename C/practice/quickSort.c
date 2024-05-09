#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void swap(int*, int*);
int partition(int[], int, int);
void quickSort(int[], int, int);
void printArr(int[], int size);

int main() {
    srand((unsigned int)time(NULL));
    int nums[10], size = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < 10; i++)
        nums[i] = rand() % 100 + 1;
    printArr(nums, size);
    quickSort(nums, 0, size - 1);
    printArr(nums, size);
    return 0;
}

void swap(int* a, int* b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}

int partition(int nums[], int left, int right) {
    int i = left, j = right;
    while (i < j) {
        while (i < j && nums[j] >= nums[left])
            j--;
        while (i < j && nums[i] <= nums[left])
            i++;
        swap(&nums[i], &nums[j]);
    }
    swap(&nums[left], &nums[i]);
    return i;
}

void quickSort(int nums[], int left, int right) {
    if (left >= right) return;
    int pivot = partition(nums, left, right);

    quickSort(nums, left, pivot - 1);
    quickSort(nums, pivot + 1, right);
}

void printArr(int nums[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", nums[i]);
    printf("\n");
}