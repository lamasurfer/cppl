//
// Created by lama on 11.02.24.
//

#include "ListNode.h"

ListNode::ListNode(int value, ListNode *prev, ListNode *next) : value(value), prev(prev), next(next)
{
    if (prev != nullptr) prev->next = this;
    if (next != nullptr) next->prev = this;
}
