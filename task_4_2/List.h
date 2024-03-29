//
// Created by lama on 11.02.24.
//
#include "ListNode.h"
#ifndef TASK_4_1_LIST_H
#define TASK_4_1_LIST_H


class List {
public:
    List();

    virtual ~List();

    bool Empty();

    unsigned long Size();

    void PushFront(int value);

    void PushBack(int value);

    int PopFront();

    int PopBack();

    void Clear();

private:
    ListNode* extractPrev(ListNode* node);

private:
    ListNode* m_head;
    ListNode* m_tail;
    unsigned long m_size;
};


#endif //TASK_4_1_LIST_H
