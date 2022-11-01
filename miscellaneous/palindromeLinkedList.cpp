#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = next;
    }
};

class Solution
{
private:
    Node *reverseList(Node *&head)
    {
        Node *prev = NULL;
        Node *curr = head;
        Node *forward;

        while (curr != NULL)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }

    Node *findMiddle(Node *head)
    {

        Node *slow = head;
        Node *fast = head->next;

        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if (head->next == NULL)
        {
            return true;
        }

        Node *middle = findMiddle(head);

        Node *temp = middle->next;
        middle->next = reverseList(temp);

        Node *head1 = head;
        Node *head2 = middle->next;

        while (head2)
        {

            if (head1->data != head2->data)
            {

                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }

        temp = middle->next;
        middle->next = reverseList(temp);

        return true;
    }
};
int main()
{
}