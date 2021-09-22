/*Without bothering about the order of elements
#include <bits/stdc++.h>
using namespace std;
void myself(vector<int> &f)
{
    int left = 0, right = f.size() - 1;
    while (left <= right)
    {
        if (f[left] < 0 && f[right] < 0)
        {
            left += 1;
        }
        else if (f[left] > 0 && f[right] > 0)
        {
            right -= 1;
        }
        else if (f[left] > 0 && f[right] < 0)
        {
            swap(f[left], f[right]);
            left += 1;
            right -= 1;
        }
        else
        {
            left += 1;
            right -= 1;
        }
    }
}
int main()
{
    vector<int> v{-2, 34, 65, -3, -34, -65, 12, -98};
    myself(v);
    cout << "modified vector is ......\n";
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}*/

//bothering about the order
#include <bits/stdc++.h>
using namespace std;
void my(vector<int> &v)
{
    vector<int> b;
    for (int i : v)
    {
        if (i < 0)
        {
            b.push_back(i);
        }
    }
    for (int j : v)
    {
        if (j > 0)
        {
            b.push_back(j);
        }
    }
    copy(b.begin(), b.end(), v.begin());
}
int main()
{
    vector<int> v{-2, 34, 65, -3, -34, -65, 12, -98};
    cout << " vector is......\n";
    my(v);
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}