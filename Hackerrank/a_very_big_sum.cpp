#include <bits/stdc++.h>
using namespace std;
long long a_very_big_sum(long long arr[], int num)
{
    long long sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int num;
    cin >> num;
    long long arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    cout << a_very_big_sum(arr, num);
    return 0;
}