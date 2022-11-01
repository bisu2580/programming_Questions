#include <bits/stdc++.h>
using namespace std;

class ll
{
public:
    int data;
    ll *next;

    ll(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~ll()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};
ll *node1 = new ll(10);
ll *head = node1;
ll *tail = node1;

void insertAtHead(ll *&head, int d)
{
    ll *temp = new ll(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(ll *&tail, int d)
{
    ll *val = new ll(d);
    tail->next = val;
    tail = val;
}
void insertAtPosition(ll *&head, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    ll *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    ll *NodetoInsert = new ll(d);
    NodetoInsert->next = temp->next;
    temp->next = NodetoInsert;
}
void print(ll *head)
{
    ll *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void deleteNode(int position, ll *&head)
{
    if (position == 1)
    {
        ll *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    else
    {
        ll *curr = head;
        ll *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    print(head);
}