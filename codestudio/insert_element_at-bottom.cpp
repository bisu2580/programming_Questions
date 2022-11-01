#include <bits/stdc++.h>
using namespace std;
void fin(stack<int> &myStack, int x)
{
    if (myStack.empty())
    {
        myStack.push(x);
        return;
    }

    int topp = myStack.top();
    myStack.pop();
    fin(myStack, x);
    myStack.push(topp);
}
stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    fin(myStack, x);
    return myStack;
}
int main()
{
}