#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next = NULL;
    ListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

ListNode *node1 = new ListNode(10);
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
int countNode(ListNode *head)
{
    ListNode *temp = head;

    int count = 0;
    while (temp)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

ListNode *middleNode(ListNode *head)
{
    ListNode *fastptr = head->next;
    ListNode *slowptr = head;
    while (fastptr != NULL && fastptr->next != NULL)
    {

        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
    }

    int num = countNode(head);

    if (num % 2 == 0)
    {
        return slowptr->next;
    }
    return slowptr;
}
int main()
{
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    insertAtTail(tail, 50);
    insertAtTail(tail, 60);
    insertAtTail(tail, 70);
    insertAtTail(tail, 80);

    ListNode *temp = middleNode(head);
    cout << "middle node value is " << temp->data;
}