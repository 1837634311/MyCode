/*
 * @lc app=leetcode.cn id=11 lang=c
 *
 * [11] 盛最多水的容器
 */

 // @lc code=start

int min(int a, int b) {
    return a <= b ? a : b;
}

int max(int a, int b) {
    return a >= b ? a : b;
}

int maxArea(int* height, int heightSize) {
    /* 方法二：优化写法，找到更高的下标 */
    int left = 0, right = heightSize - 1, result;
    while (left < right) {  // 指针相遇时跳出
        result = max(result, min(height[left], height[right]) * (right - left));
        // 移动短边，才可能使面积更大
        if (height[left] <= height[right]) {
            int cur = height[left];
            while (height[left] <= cur && left < right) left++;
            // 一直找到更大的位置。因为移动多次，所以没法放到数组里
        } else {
            int cur = height[right];
            while (height[right] <= cur && left < right) right--;
        }
    }
    return result;
}
// @lc code=end

/* 方法一：简化写法
int max(int a, int b) {
    return a >= b ? a : b;
}

int maxArea(int* height, int heightSize) {
    int left = 0, right = heightSize - 1, result;
    while (left < right) {  // 指针相遇时跳出
        // 移动短边，才可能使面积更大
        result = height[left] < height[right] ?
            max(result, (right - left) * height[left++]) :
            max(result, (right - left) * height[right--]);
        // 因为没有计算 result 的初值，所以先计算再移动
        // 双指针的判断、移动，可以放进数组里面，且将判断、移动放进一行代码
    }
    return result;
}
*/