#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int data)
    {
        this->val = data;
        this->next = NULL;
    }
};

void deleteNode(ListNode *node)
{

    ListNode *prev;
    while (node->next != NULL)
    {
        prev = node;
        node->val = node->next->val;
        node = node->next;
    }

    prev->next = NULL;
}

int main()
{
}
