#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    if (!tail)
    {
        tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    if (!head)
    {
        head = temp;
        return;
    }
    temp->next = head;
    head = temp;
}
Node *iterativeReverse(Node *head)
{
    Node *previous = NULL;
    Node *current = head;
    Node *forward;
    while (current)
    {
        forward = current->next;
        current->prev = forward;
        current->next = previous;
        previous = current;
        current = forward;
    }
    return previous;
}
Node *recursiveReverse(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *chota = recursiveReverse(head->next);
    head->prev = head->next;
    head->next->next = head;
    head->next = NULL;
    return chota;
}
int main()
{
    Node *num = new Node(10);
    Node *head = num;
    Node *tail = num;
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    head = iterativeReverse(head);
    print(head);
}