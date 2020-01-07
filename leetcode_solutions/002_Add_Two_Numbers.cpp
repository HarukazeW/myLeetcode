#include "functions.h"

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int carry = 0;
    ListNode head(0), * p = &head;
    while (l1 && l2) {
        int num = l1->val + l2->val + carry;
        p->next = new ListNode(num % 10);
        carry = num / 10;
        p = p->next;
        l1 = l1->next;
        l2 = l2->next;
    }
    l1 = l1 ? l1 : l2;
    while (l1 || carry) {
        int num = carry;
        if (l1) {
            num += l1->val;
            l1 = l1->next;
        }
        p->next = new ListNode(num % 10);
        carry = num / 10;
        p = p->next;
    }
    return head.next;
}