/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 两个链表的节点数目范围是 [0, 50]
 */
struct ListNode* trainningPlan(struct ListNode* l1, struct ListNode* l2) {
    // 照旧虚拟头节点
    struct ListNode* vir = (struct ListNode*)malloc(sizeof(struct ListNode));
    vir->val = 0;
    vir->next = l1;
    struct ListNode* cur = vir;

    // 将 1、2 插入到新的链表中
    while (l1 && l2) {
        if (l1->val < l2->val) {    // 判断节点顺序
            cur->next = l1;
            l1 = l1->next;    // 后移 l1
        } else {
            cur->next = l2;
            l2 = l2->next;    // 后移 l2
        }
        cur = cur->next;    // 后移 cur
    }
    cur->next = l1 ? l1 : l2;    // 判断哪个链表走到了末尾，就接上另外一个链表

    return vir->next;
}