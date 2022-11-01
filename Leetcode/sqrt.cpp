#include <bits/stdc++.h>
using namespace std;
long long binary(int num)
{

    int s = 0, e = num;
    long long mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        long long result = (mid * mid);
        if (result == num)
        {
            return mid;
        }
        else if (result < num)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

int mySqrt(int x)
{
    return binary(x);
}
int main()
{
    cout << mySqrt(10000);
}