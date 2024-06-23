/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* trainingPlan(struct ListNode* head, int cnt) {
    /* 解法二：双指针，只遍历一次链表 */
    // 第一步，初始化指针
    struct ListNode* former = head, * latter = head;
    // 第二步，是前后两个指针相距 cnt。当 cnt == 1 时，两个指针指向的位置一样
    while (cnt-- > 1)
        former = former->next;
    // 第三步，遍历链表
    while (former->next != NULL) {
        former = former->next;
        latter = latter->next;
    }
    // 当 former 遍历到指针尾部后，因为两个指针相距 cnt，所以 latter 的位置就是需要返回的节点
    return latter;
}
/* 解法一：先遍历数组长度，然后从头开始找到指定的节点
    int len = 1;
    struct ListNode* cur = head;
    while (cur->next != NULL) {
        cur = cur->next;
        len++;
    }
    cur = head;
    while (len-- != cnt)
        cur = cur->next;

    return cur;
*/