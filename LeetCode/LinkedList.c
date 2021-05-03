#include <stdbool.h>
#include <math.h>
#include <stddef.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

int main()
{
    return 0;
}

// 21
struct ListNode *mergeTwoLists(struct ListNode *l1, struct ListNode *l2)
{
    //  Recursive O(n)
    if (l1 == 0 && l2 == 0)
    {
        return 0;
    }
    else if (l1 == 0)
    {
        return l2;
    }
    else if (l2 == 0)
    {
        return l1;
    }
    else
    {
        if (l1->val < l2->val)
        {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        else
        {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
}
// 83
struct ListNode *deleteDuplicates(struct ListNode *head)
{
    if (head == 0)
    {
        return head;
    }
    else
    {

        struct ListNode dummy;
        dummy.val = 1000;
        struct ListNode *tail = &dummy;
        while (head)
        {
            if (tail->val != head->val)
            {
                tail->next = head;
                tail = tail->next;
            }
            head = head->next;
        }
        tail->next = 0;
        return dummy.next;
    }
}
// 141
bool hasCycle(struct ListNode *head)
{
    struct ListNode *fast = head;
    struct ListNode *slow = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}
// 160. Intersection of Two Linked Lists
int Length(struct ListNode *node)
{
    int n = 0;
    while (node)
    {
        ++n;
        node = node->next;
    }
    return n;
}
// 160. Intersection of Two Linked Lists
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
    struct ListNode *a = headA;
    struct ListNode *b = headB;
    int lenA = Length(a);
    int lenB = Length(b);
    if(lenA<lenB)
    {
        a = headB;
        b = headA;
    }
    else
    {
        a = headA;
        b = headB;
    }
    for (int i = 0; i < abs(lenA-lenB); i++)
    {
        a = a->next;
    }
    while(a)
    {
        if(a==b)
        {
            return a;
        }
        else
        {
            a = a->next;
            b = b->next;
        }
    }
    return NULL;
}

// 203
struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode dummy;
    dummy.val = 0;
    struct ListNode *tail = &dummy;
    while(head)
    {
        if(head->val!=val)
        {
            tail->next = head;
            tail = tail->next;
        }
        head = head->next;
    }
    tail->next = NULL;
    return dummy.next;
}