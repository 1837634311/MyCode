/*
 * @lc app=leetcode.cn id=1103 lang=c
 *
 * [1103] 分糖果 II
 */

 // @lc code=start
 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */
int* distributeCandies(int candies, int num_people, int* returnSize) {
    int* res = (int*)calloc(num_people, sizeof(int));
    *returnSize = num_people;
    int cnt = 0;
    for (int i = 1; candies > 0; i++) {
        res[(i - 1) % num_people] += i < candies ? i : candies;
        candies -= i;
    }
    return res;
}
// @lc code=end

