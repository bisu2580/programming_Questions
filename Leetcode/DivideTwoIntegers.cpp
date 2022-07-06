#include <bits/stdc++.h>
using namespace std;

int divide(int x, int y)
{
    long long dividend = x;
    long long divisor = y;
    if (dividend == (1 << 31) && divisor == -1)
        return INT_MAX;

    bool sign = (dividend >= 0) == (divisor >= 0) ? true : false;

    dividend = abs(dividend);
    divisor = abs(divisor);

    long long result = 0;

    while (dividend - divisor >= 0)
    {
        long long count = 0;
        while (dividend - (divisor << 1 << count) >= 0)
        {
            count++;
        }
        result += 1 << count;
        dividend -= divisor << count;
    }
    return (sign ? result : -result);
}

int main()
{

    int dividend = 10;
    int divisor = 6;

    cout << "The answer is " << divide(10, 5);
}