/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */

int* reverseBookList(struct ListNode* head, int* returnSize) {
    /* 方法一：先将链表放入数组，再反转数组 */
    int* returnSize = 0;
    while (head != NULL) {
        returnArr[(*returnSize)++] = head->val;
        head = head->next;
    }

    int* returnArr = (int*)malloc(sizeof(int) * 10000);
    for (int i = 0; i < *returnSize / 2; i++) {
        int temp = returnArr[i];
        returnArr[i] = returnArr[*returnSize - i - 1];
        returnArr[*returnSize - i - 1] = temp;
    }
    return returnArr;

    /* 方法二：遍历链表，获取链表长度，再遍历链表，将值倒序存放数组
        // 建立一个头节点，用于初始遍历链表
        *returnSize = 0;
        struct ListNode* p = head;
        while (p != NULL) {
            (*returnSize)++;
            p = p->next;
        }

        // 遍历链表，将值倒序存放进数组
        int* returnArr = (int*)malloc(sizeof(int) * *returnSize);
        int size = *returnSize;
        while (size > 0) {
            returnArr[--size] = head->val;
            head = head->next;
        }
        return returnArr;
    */
}