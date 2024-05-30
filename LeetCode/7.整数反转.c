/*
 * @lc app=leetcode.cn id=7 lang=c
 *
 * [7] 整数反转
 */
 // 我的题解：https://leetcode.cn/problems/reverse-integer/solutions/2787865/ji-yu-guan-fang-ti-jie-de-jian-dan-li-ji-3abm/
 // @lc code=start
int reverse(int x) {
    int res = 0;
    while (x >= 10 || x <= -10) {
        res = res * 10 + x % 10;
        x /= 10;
    }
    return (res > 214748364 || res < -214748364) ? 0 : res * 10 + x;
}
// @lc code=end
