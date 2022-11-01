#include <bits/stdc++.h>
class Queue
{

    int *arr;
    int front1;
    int rear;
    int size;

public:
    Queue()
    {
        size = 100001;
        arr = new int[100001];
        front1 = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        if (front1 == rear)
        {
            return true;
        }
        return false;
    }

    void enqueue(int data)
    {
        if (rear == size)
            return;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue()
    {
        if (front1 == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[front1];
            arr[front1] = -1;
            front1++;
            if (front1 == rear)
            {
                front1 = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front()
    {
        if (front1 == rear)
        {
            return -1;
        }
        return arr[front1];
    }
};