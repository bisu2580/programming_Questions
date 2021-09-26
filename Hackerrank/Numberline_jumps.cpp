#include <bits/stdc++.h>
using namespace std;
bool check(int x1, int v1, int x2, int v2)
{
    int n = x1;
    int n2 = x2;
    for (int i = min(x1, x2); i <= 10000; i++)
    {
        n += v1;
        n2 += v2;
        if (((n - x1) / v1) == ((n2 - x2) / v2) && (n == n2))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int x1,v1,x2,v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if (v2 > v1 && x2 > x1)
    {
        cout << "NO";
    }
    else
    {
        if (check(x1, v1, x2, v2))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}