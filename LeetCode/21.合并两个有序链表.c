/*
 * @lc app=leetcode.cn id=21 lang=c
 *
 * [21] 合并两个有序链表
 */

 // @lc code=start
 /**
  * Definition for singly-linked list.
  * struct ListNode {
  *     int val;
  *     struct ListNode *next;
  * };
  */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    // 照旧虚拟头节点
    struct ListNode* vir = (struct ListNode*)malloc(sizeof(struct ListNode));
    vir->val = 0;
    vir->next = list1;
    struct ListNode* cur = vir;

    // 将 1、2 插入到新的链表中
    while (list1 && list2) {
        if (list1->val < list2->val) {    // 判断节点顺序
            cur->next = list1;
            list1 = list1->next;    // 后移 list1
        } else {
            cur->next = list2;
            list2 = list2->next;    // 后移 list2
        }
        cur = cur->next;    // 后移 cur
    }
    cur->next = list1 ? list1 : list2;    // 判断哪个链表走到了末尾，就接上另外一个链表

    return vir->next;
}
// @lc code=end

