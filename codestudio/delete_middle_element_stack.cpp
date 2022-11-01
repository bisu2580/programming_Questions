#include <bits/stdc++.h>
using namespace std;
void del(stack<int> &inputStack, int count, int size)
{

    if (count == size / 2)
    {
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();

    del(inputStack, count + 1, size);
    inputStack.push(num);
}

void deleteMiddle(stack<int> &inputStack, int N)
{

    int count = 0;
    del(inputStack, count, N);
}

int main()
{
    stack<int> input;
    input.push(10);
    input.push(20);
    input.push(30);
    input.push(40);
    input.push(50);
    input.push(60);
    input.push(70);
    deleteMiddle(input, 7);

    stack<int> num;
    while (!input.empty())
    {
        num.push(input.top());
        input.pop();
    }

    while (!num.empty())
    {
        cout << num.top() << " ";
        num.pop();
    }
}