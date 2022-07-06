#include <bits/stdc++.h>
using namespace std;
void rotateArray(deque<int> &num, int steps)
{

    while (steps--)
    {
        int first = num.front();
        num.pop_front();
        num.push_back(first);
    }
}
int main()
{
    int N;
    cin >> N;
    deque<int> res;
    int num;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        res.push_back(num);
    }
    int steps;
    cin >> steps;
    rotateArray(res, steps % N);
    for (int i = 0; i < N; i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}