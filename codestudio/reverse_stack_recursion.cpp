#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &stack, int x)
{
    if (stack.empty())
    {
        stack.push(x);
        return;
    }
    int num = stack.top();
    stack.pop();
    insertAtBottom(stack, x);
    stack.push(num);
}
void reverseStack(stack<int> &stack)
{

    if (stack.empty())
    {
        return;
    }
    int num = stack.top();
    stack.pop();
    reverseStack(stack);
    insertAtBottom(stack, num);
}

int main()
{
    stack<int> num;
    num.push(23);
    num.push(54);
    num.push(86);
    num.push(56);
    num.push(7);
    num.push(8);
    num.push(3);
    num.push(36);
    reverseStack(num);
}