#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
ListNode *node1 = new ListNode(2);
ListNode *head = node1;
ListNode *tail = node1;
void insertAtTail(ListNode *&tail, int d)
{
    ListNode *val = new ListNode(d);
    tail->next = val;
    tail = val;
}
void print(ListNode *head)
{
    ListNode *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
ListNode *oddEvenList(ListNode *head)
{
    if (head == NULL)
    {
        return head;
    }
    ListNode *odd = head;
    ListNode *even = head->next;
    ListNode *head2 = even;
    ListNode *forw;
    while (odd->next && even->next)
    {
        forw = odd->next;
        odd->next = forw->next;
        even->next = odd->next->next;
        odd = odd->next;
        even = even->next;
    }
    odd->next = head2;
    return head;
}

int main()
{
    insertAtTail(tail, 1);
    insertAtTail(tail, 3);
    insertAtTail(tail, 5);
    insertAtTail(tail, 6);
    insertAtTail(tail, 4);
    insertAtTail(tail, 7);
    head = oddEvenList(head);
    print(head);
}