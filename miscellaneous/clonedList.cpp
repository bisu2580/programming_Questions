//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node
{
    int data;
    Node *next;
    Node *arb;

    Node(int x)
    {
        data = x;
        next = NULL;
        arb = NULL;
    }
};
class Solution
{
private:
    void insertAtTail(Node *&head, Node *&tail, int value)
    {

        Node *num = new Node(value);
        if (head == NULL)
        {
            head = num;
            tail = num;
            return;
        }
        else
        {
            tail->next = num;
            tail = num;
        }
    }

public:
    Node *copyList(Node *head)
    {
        Node *cloneHead = NULL;
        Node *cloneTail = NULL;

        Node *temp = head;

        while (temp != NULL)
        {
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }

        unordered_map<Node *, Node *> oldToNewNode;

        Node *original = head;
        Node *cloned = cloneHead;
        while (original != NULL && cloned != NULL)
        {
            oldToNewNode[original] = cloned;
            original = original->next;
            cloned = cloned->next;
        }

        original = head;
        cloned = cloneHead;

        while (original != NULL)
        {
            cloned->arb = oldToNewNode[original->arb];
            original = original->next;
            cloned = cloned->next;
        }
        return cloneHead;
    }
};