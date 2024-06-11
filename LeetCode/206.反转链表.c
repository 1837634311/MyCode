/*
 * @lc app=leetcode.cn id=206 lang=c
 *
 * [206] 反转链表
 */

 // @lc code=start
 /**
  * Definition for singly-linked list.
  * struct ListNode {
  *     int val;
  *     struct ListNode *next;
  * };
  */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* pre = NULL, * next;
    // 假设链表按从左到右的顺序沿直线摊开，则 head 为头节点，pre 为尾节点
    // 反转链表的过程中，head 从指向原链表的下一个节点，变为指向原链表的上一个节点
    // 反转链表后，pre 变为头节点，head 变为尾节点
    while (head) {
        // next 记录 head 下一次移动到的位置，也就是原链表的下一个节点
        next = head->next;
        // 将 head 的下一个节点指向 pre，原链表的上一个节点，即反转链表
        head->next = pre;
        // 将 pre 和 head 往原链表的下一个节点平移
        pre = head;
        head = next;
    }
    return pre;
}
// @lc code=end

