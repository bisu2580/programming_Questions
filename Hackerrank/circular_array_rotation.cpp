#include <bits/stdc++.h>
using namespace std;
void change(deque<int> v, int k, int n)
{
    for (int i = 0; i < k; i++)
    {
        int val = v.back();
        v.pop_back();
        v.push_front(val);
    }
    int num;
    while (n--)
    {
        cin >> num;
        cout << v[num] << endl;
    }
    return;
}
int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    deque<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    change(v, k % n, q);
}