#include <iostream>
using namespace std;
double myPow(double x, int n)
{

    double ans = 1.0;
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            ans = ans * x;
        }
    }
    else
    {
        n = n * (-1);
        for (int i = 1; i <= n; i++)
        {
            ans = ans * x;
        }
        return (1 / ans);
    }
    return ans;
}
int main()
{
    double x = 2.00000;
    int n = -2;
    cout << myPow(x, n);
}