/*
 * @lc app=leetcode.cn id=707 lang=c
 *
 * [707] 设计链表
 */

 // @lc code=start

typedef struct MyLinkedList_temp {
    int val;
    struct MyLinkedList_temp* next;
} MyLinkedList;

MyLinkedList* myLinkedListCreate() {
    MyLinkedList* i = (MyLinkedList*)malloc(sizeof(MyLinkedList));
    i->val = 0;
    i->next = NULL;
    return i;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    MyLinkedList* cur = obj;
    int curPos = 1;
    while (curPos++ != index && cur) {
        cur = cur->next;
    }
    if (cur) {
        return cur->val;
    } else {
        return -1;
    }
}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    myLinkedListAddAtIndex(obj, 1, val);
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    MyLinkedList* cur = obj;
    while (cur->next) {
        cur = cur->next;
    }
    MyLinkedList* tail = myLinkedListCreate();
    tail->val = val;
    cur->next = tail;
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    MyLinkedList* pre = obj;
    int curPos = 1;
    while (curPos++ != index && pre) {
        pre = pre->next;
    }
    if (curPos < index) {
        return;
    }

    MyLinkedList* cur = myLinkedListCreate();
    cur->val = val;
    if (pre->next) {
        cur->next = pre->next;
    }
    pre->next = cur;
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    MyLinkedList* pre = obj;
    int curPos = 1;
    while (curPos++ != index && pre) {
        pre = pre->next;
    }
    if (curPos < index || pre->next == NULL) {
        return;
    }
    MyLinkedList* temp = pre->next;
    pre->next = pre->next->next;
    free(temp);
}

void myLinkedListFree(MyLinkedList* obj) {

}

/**
 * Your MyLinkedList struct will be instantiated and called as such:
 * MyLinkedList* obj = myLinkedListCreate();
 * int param_1 = myLinkedListGet(obj, index);

 * myLinkedListAddAtHead(obj, val);

 * myLinkedListAddAtTail(obj, val);

 * myLinkedListAddAtIndex(obj, index, val);

 * myLinkedListDeleteAtIndex(obj, index);

 * myLinkedListFree(obj);
*/
// @lc code=end

