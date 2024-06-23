/*
 * @lc app=leetcode.cn id=26 lang=c
 *
 * [26] 删除有序数组中的重复项
 */

 // @lc code=start
int removeDuplicates(int* nums, int numsSize) {
    // left 指向第一个数，right 指向下一个需要比较的数
    // left 表示需要填充到数组前面的位置
    int left = 0, right = 1;
    while (right < numsSize) {
        // 如果两个指针指向的数不相等，说明不是重复的数
        // 将 right 指向的数复制到 left 的右边
        // 如果之前没有重复的数据，那么 left + 1 会指向 right
        // 这时，由于 right - left <= 1，所以不会复制，仅仅移动 left
        if (nums[left] != nums[right]) {
            if (right - left > 1)
                nums[left + 1] = nums[right];
            left++;
        }
        // 如果两个指针指向的数相等，说明是重复的数，不需要复制，只需要将 right 向后移动一位
        right++;
    }
    return left + 1;
}
// @lc code=end

