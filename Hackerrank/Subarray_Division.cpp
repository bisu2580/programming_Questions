#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    int d, m, count = 0, sum = 0;
    cin >> d >> m;
    for (int i = 0; i < (num - m + 1); i++)
    {
        sum = 0;
        for (int j = i; j < i + m; j++)
        {
            sum += arr[j];
        }
        if (sum == d)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}