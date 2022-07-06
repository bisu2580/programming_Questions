/*The approach behind this question is that we have to take subset with maximum no of 0.
So when we convert 0 to 1 we get extra count and when we convert 1 to 0 we lose a count.
Now using kedane's algo, we will make count to 0 when it will become less than 0.*/
#include <bits/stdc++.h>
using namespace std;
int flipBits(int *arr, int n)
{
    int zero = 0, one = 0, maxcount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else
        {
            zero--;
            one++;
        }
        maxcount = max(maxcount, zero);
        if (zero < 0)
        {
            zero = 0;
        }
    }
    return maxcount + one;
}
int main()
{
    int arr[] = {1, 1, 1, 0};
    cout << flipBits(arr, 4);
}