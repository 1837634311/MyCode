/*
 * @lc app=leetcode.cn id=338 lang=c
 *
 * [338] 比特位计数
 */

 // @lc code=start
 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */
int* countBits(int n, int* returnSize) {
    // 方法三：动态规划——最低设置位——写法二
    *returnSize = n + 1;
    int* res = (int*)calloc(*returnSize, sizeof(int));
    for (int i = 1; i <= n; i++)
        /* 当 i 为奇数时，相比于 i，i - 1 的末尾由 1 变为 0。
         * 再 & 运算，得到的就是前一个偶数，+ 1 即为结果。
         * 当 i 为偶数时，i 的最低设置位之后一定有 0，i - 1 相当于对这几位取反，
         * 再 & 运算，相比于 i，得到的是丢失了最低设置位的数，+ 1 即为结果。
         */
        res[i] = res[i & (i - 1)] + 1;
    return res;
}
// @lc code=end

/* 方法一：暴力
    *returnSize = n + 1;
    int* res = (int*)calloc(*returnSize, sizeof(int));
    for (int i = 0; i <= n; i++)
        for (int j = i; j > 0; j >>= 1) {
            res[i] += j & 1;
        }
    return res;
*/

/* 方法二：动态规划——最低设置位——写法一
    *returnSize = n + 1;
    int* res = (int*)calloc(*returnSize, sizeof(int));
    for (int i = 0; i <= n; i++)
        // 偶数时，最低为是 0，所以 1 的个数就是（[i / 2]）。
        // 奇数时，相比于它的前一个数，也就是偶数的末尾，0 变为 1，所以 1 的个数就是（[前一个数] + 1）。
        if (i & 1)
            res[i] = res[i - 1] + 1;
        else
            res[i] = res[i >> 1];
    return res;
*/