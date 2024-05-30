/*
 * @lc app=leetcode.cn id=189 lang=c
 *
 * [189] 轮转数组
 */

 // @lc code=start

/* 作用：翻转数组
 * 参数：nums：数组，begin：开始翻转的起始位置，size：数组长度
 * 返回：无
*/
void reverse(int* nums, int begin, int size) {
    // i 控制翻转的起始位置，cnt 控制翻转的次数
    for (int i = begin, cnt = 0; cnt < (size - begin) / 2; i++, cnt++) {
        int temp = nums[i];
        nums[i] = nums[size - 1 - cnt];
        nums[size - 1 - cnt] = temp;
    }
}

/* 思路、算法：
 * 设有一个数组[1, 2, 3, 4, 5, 6, 7]，向右轮转 3 次。
 * 第一次，先翻转整个数组，得到 [7, 6, 5, 4, 3, 2, 1]，
 * 根据轮转次数，将数组划分为[5, 6, 7]和[1, 2, 3, 4]，前后两个数组。
 * 第二次，翻转前一个数组，得到 [5, 6, 7, 4, 3, 2, 1]，
 * 第三次，翻转后一个数组，得到 [5, 6, 7, 1, 2, 3, 4]。
 */
void rotate(int* nums, int numsSize, int k) {
    reverse(nums, 0, numsSize);
    reverse(nums, 0, k % numsSize);
    reverse(nums, k % numsSize, numsSize);
}

/* 同理，数组左移：
void rotate(int* nums, int numsSize, int k) {
    reverse(nums, 0, k % numsSize);
    reverse(nums, k % numsSize, numsSize);
    reverse(nums, 0, numsSize);
}
*/
// @lc code=end

