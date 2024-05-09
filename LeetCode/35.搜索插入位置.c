/*
 * @lc app=leetcode.cn id=35 lang=c
 *
 * [35] 搜索插入位置
 */

 // @lc code=start
int searchInsert(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1, ans = numsSize;
    while (left <= right) {
        int mid = left + ((right - left) >> 1);
        /* 和普通的「二分查找」不同的是：如果不存在数组中的时候需要返回按顺序插入的位置。
        这时需要改变条件，即：在一个有序数组中找第一个大于等于 target 的下标。
        如果数组中不存在大于 target 的元素，直接返回数组的大小即可。
        */
        if (target <= nums[mid]) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return ans;
}

// @lc code=end

