/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

 // @lc code=start
int removeElement(int* nums, int numsSize, int val) {
    int left = 0, right = numsSize - 1;
    while (left <= right) {
        if (nums[left] == val) {
            nums[left] = nums[right];
            right--;
        } else
            left++;
    }
    return left;
}
// @lc code=end

