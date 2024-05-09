/*
 * @lc app=leetcode.cn id=50 lang=c
 *
 * [50] Pow(x, n)
 */

 // @lc code=start
double myPow(double x, int n) {
    long long N = n >= 0 ? n : -(long long)n;
    double ans = 1.0;
    while (N > 0) {
        if (N & 1)
            ans *= x;
        x *= x;
        N >>= 1;
    }
    return n >= 0 ? ans : 1 / ans;
}
// @lc code=end

