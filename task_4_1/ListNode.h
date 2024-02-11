#ifndef TASK_4_1_LISTNODE_H
#define TASK_4_1_LISTNODE_H


struct ListNode {
public:
    ListNode(int value, ListNode* prev = nullptr, ListNode* next = nullptr);
    int value;
    ListNode* prev;
    ListNode* next;
};


#endif //TASK_4_1_LISTNODE_H
