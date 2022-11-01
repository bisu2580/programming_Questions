#include <bits/stdc++.h>
using namespace std;

class Stack
{

public:
    int top;
    int *arr;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
            size--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }

    int getPeek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty";
            return -1;
        }
    }

    bool isEmpty()
    {
        return (top == -1);
    }

    void getElements()
    {
        if (top == -1)
        {
            cout << "Stack is empty.";
        }
        else
        {
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
        }
    }
};

int main()
{
    Stack st(5);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(60);

    cout << "Top element: " << st.getPeek() << endl;

    cout << "Elements are: \n";
    st.getElements();

    cout << endl;

    st.pop();
    st.pop();

    cout << "Top element: " << st.getPeek() << endl;

    cout << "Elements after pop are: \n";
    st.getElements();
}