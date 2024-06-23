/*
 * @lc app=leetcode.cn id=69 lang=c
 *
 * [69] x 的平方根
 */

 // @lc code=start
int mySqrt(int x) {
    if (x == 0)
        return 0;
    else if (x < 4)
        return 1;

    long long temp = 0;
    int i = 2;
    while (temp < x) {
        temp = i * i;
        i++;
    }

    if (temp > x)
        i -= 1;

    return i - 1;
}
// @lc code=end

