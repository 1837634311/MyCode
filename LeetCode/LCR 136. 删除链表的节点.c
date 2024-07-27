/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 // 题目不要求释放被删除的节点

struct ListNode* deleteNode(struct ListNode* head, int val) {
    /* 方法二：虚拟头节点 */
    struct ListNode* cur = (struct ListNode*)malloc(sizeof(struct ListNode)), * p;
    cur->next = head;
    cur->val = NULL;
    p = cur;    // 记录虚拟头节点位置
    while (cur->next != NULL) {
        if (cur->next->val == val) {
            cur->next = cur->next->next;
            break;
        }
        cur = cur->next;
    }
    // 返回虚拟头节点的下一个，也就是删除节点后的链表头节点
    return p->next;
}

/* 方法一：先判断头节点，再删除
    // 如果要删除头节点，直接返回
    if (head->val == val)
        return head->next;

    struct ListNode* p = head;    // 保存头节点
    // 遍历链表，查找要删除的节点
    while (head->next != NULL) {
        // 如果下一个节点就是要删除的节点，使下一个节点指向下下一个节点
        if (head->next->val == val) {
            head->next = head->next->next;
            break;
        }
        head = head->next;
    }
    return p;
*/