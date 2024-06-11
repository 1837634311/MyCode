/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* trainingPlan(int* actions, int actionsSize, int* returnSize) {
    *returnSize = actionsSize;
    int* ans = (int*)malloc(actionsSize * sizeof(int));
    for (int i = 0, j = 0, k = actionsSize - 1; i < actionsSize; i++) {
        // 从数组前面开始存放奇数，从后面开始存放偶数。
        if (actions[i] & 1)
            ans[j++] = actions[i];
        else
            ans[k--] = actions[i];
    }
    return ans;
}