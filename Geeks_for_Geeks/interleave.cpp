#include <bits/stdc++.h>
using namespace std;
queue<int> interleave(queue<int> q)
{
    queue<int> n;
    int size = q.size();
    int i = size / 2;
    while (i--)
    {
        n.push(q.front());
        q.pop();
    }
    while (!n.empty())
    {
        q.push(n.front());
        n.pop();
        int num = q.front();
        q.push(num);
        q.pop();
    }
    return q;
}
int main()
{
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    queue<int> res = interleave(q);
    q = res;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}