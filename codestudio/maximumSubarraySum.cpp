// solved using kedane's algorithm

#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    long long sum = arr[0];
    long long maxi = arr[0];
    if (n == 0)
    {
        maxi = 0;
    }
    for (int i = 1; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        maxi = max(maxi, sum);
    }
    return maxi;
}
int main()
{
    int arr[] = {10, 20, -30, 40, -50, 60};
    cout << maxSubarraySum(arr, 6);
}