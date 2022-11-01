#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> time, int n, int m, long long mid)
{
    long long pageCount = 0;
    long long students = 1;

    for (int i = 0; i < m; i++)
    {
        if (pageCount + time[i] <= mid)
        {
            pageCount += time[i];
        }
        else
        {
            students++;
            if (students > n || time[i] > mid)
            {
                return false;
            }
            pageCount = time[i];
        }
    }
    return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time)
{
    long long s = 0;
    long long sum = 0;

    for (int i = 0; i < m; i++)
    {
        sum += time[i];
    }
    long long e = sum;

    long long ans = -1;
    long long mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(time, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    vector<int> num = {1, 2, 2, 3, 1};
    int m = num.size();
    int n = 3;
    cout << ayushGivesNinjatest(n, m, num);
}