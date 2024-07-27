#include <stdio.h>
#include <stdlib.h>

// 最后两个数据超了，但前面都是对的，怀疑是查询链表的 O(n) 太长了。其他人的解题方法都是结构体数组。就这样吧。

typedef struct number {
    int val;
    struct number* next;
}num;

num* newListNode(int val);

num* find(int pos, num* head);

void insertListNode(int val, int pos, num* head);

void removeListNode(int pos, num* head);

int main() {
    int type, count, pos, val;
    num* head = newListNode(1);
    scanf("%d", &count);
    for (int i = 1; i <= count; i++) {
        scanf("%d %d", &type, &pos);
        switch (type) {
        case 1:
            scanf("%d", &val);
            insertListNode(val, pos, head);
            break;
        case 2: {
            num* cur = find(pos, head);
            printf("%d\n", cur->next == NULL ? 0 : cur->next->val);
            break;
        }
        case 3:
            removeListNode(pos, head);
        }
    }
    return 0;
}

num* newListNode(int val) {
    num* newNum = (num*)malloc(sizeof(num));
    newNum->val = val;
    newNum->next = NULL;
    return newNum;
}

void insertListNode(int val, int pos, num* head) {
    num* newNum = newListNode(val);

    num* pre = find(pos, head);
    num* post = pre->next;
    pre->next = newNum;
    newNum->next = post;
}

void removeListNode(int pos, num* head) {
    num* pre = find(pos, head);
    num* temp = pre->next;
    num* post = pre->next->ext;
    pre->next = post;
    free(temp);
}

num* find(int pos, num* head) {
    num* cur = head;
    while (cur->val != pos) {
        cur = cur->next;
    }
    if (cur != NULL) {
        return cur;
    } else {
        printf("Error!");
        exit(0);
    }
}
