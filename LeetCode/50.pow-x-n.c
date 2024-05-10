/*
 * @lc app=leetcode.cn id=50 lang=c
 *
 * [50] Pow(x, n)
 */
 // 我的题解：https://leetcode.cn/problems/powx-n/solutions/2770366/kuai-su-mi-suan-fa-de-die-dai-ban-ben-by-mjpv/
 // @lc code=start
double myPow(double x, int n) {
    // 有一个测试数据较大，需要使用 long long 来存放
    long long N = n >= 0 ? n : -(long long)n;
    double ans = 1.0;
    while (N > 0) {
        // 如果最后一位是 1 ，则相乘到结果。否则仅仅更新下一项
        if (N & 1)
            ans *= x;
        x *= x;
        N >>= 1;
    }
    // 若幂次为负，则取倒数
    return n >= 0 ? ans : 1 / ans;
}
// @lc code=end

