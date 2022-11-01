#include <bits/stdc++.h>
using namespace std;

long long binary(long long int num)
{
    unsigned int s = 0, e = num;
    long long mid = s + (e - s) / 2;
    long long ans = -1;
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
int sqrtN(long long int N)
{
    return binary(N);
}
int tellWithPrecision(long long int n, int precision)
{
}
int main()
{
    long long int num = sqrtN(1000);
}