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

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    if (head == NULL)
    {
        return head;
    }
    ListNode *slow = head;
    ListNode *fast = head;

    for (int i = 1; i <= n + 1; i++)
    {
        if (fast == NULL)
            return head->next; // For first node deletion
        fast = fast->next;
    }

    while (fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;
    return head;
}
int main()
{
}