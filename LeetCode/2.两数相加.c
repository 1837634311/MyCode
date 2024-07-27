/*
 * @lc app=leetcode.cn id=2 lang=c
 *
 * [2] 两数相加
 */

 // @lc code=start
 /**
  * Definition for singly-linked list.
  * struct ListNode {
  *     int val;
  *     struct ListNode *next;
  * };
  */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    while (l1 || l2) {
        l1->val = l1->val + l2->val;
        if (l1 == NULL) l1 = l2->next;
        if (l2 == NULL) l2 = l1->next;
        if (l1->val)
    }
}
// @lc code=end

