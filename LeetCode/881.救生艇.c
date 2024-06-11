/*
 * @lc app=leetcode.cn id=881 lang=c
 *
 * [881] 救生艇
 */

 // @lc code=start
// 比较函数
int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int numRescueBoats(int* people, int peopleSize, int limit) {
    // 对数组进行排序
    qsort(people, peopleSize, sizeof(int), cmp);
    int ans = 0, light = 0, heavy = peopleSize - 1;
    while (light <= heavy) {
        // 在没有上船的人中，如果最重的的能和最轻的在一条船配对，那么最轻的上船
        if (people[light] + people[heavy] <= limit)
            light++;
        // 如果不能配对，只让最重的上船。
        // 也就是无论什么情况，最重的都会上船，船数增加
        ans++;
        heavy--;
    }
    return ans;
}
// @lc code=end

