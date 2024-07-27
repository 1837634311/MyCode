#include <stdio.h>
#include <stdlib.h>

#define arr height
#define arrSize heightSize

int max(int a, int b) {
    return a >= b ? a : b;
}

int maxArea(int* height, int heightSize) {
    int left = 0, right = heightSize - 1, result = 0;
    while (left < right) {
        result = height[left] < height[right] ?
            max(result, (right - left) * height[left++]) :
            max(result, (right - left) * height[right--]);
    }
    return result;
}

int main() {
    int a = 7, b = 0, ans;
    double c = 2, d = 0;
    int arr[] = { 1, 2, 4, 3 };
    int arrSize = sizeof(height) / sizeof(int);
    int result = maxArea(height, heightSize);
    printf("%d", result);
    return 0;
}