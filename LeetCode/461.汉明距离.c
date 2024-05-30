/*
 * @lc app=leetcode.cn id=461 lang=c
 *
 * [461] 汉明距离
 */

 // @lc code=start
int hammingDistance(int x, int y) {
    int n = x ^ y, res = 0;
    while (n) {
        res += n & 1;
        n >>= 1;
    }
    return res;
}
// @lc code=end

