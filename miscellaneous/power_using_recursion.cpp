#include <bits/stdc++.h>
using namespace std;
int power(int num, int pow)
{
    if (pow == 0)
    {
        return 1;
    }
    if (pow == 1)
    {
        return num;
    }
    int ans = power(num, pow / 2);
    if (pow % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return num * ans * ans;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = power(a, b);
    cout << ans;
}