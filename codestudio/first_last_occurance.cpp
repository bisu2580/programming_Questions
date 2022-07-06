#include <bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> &arr, int n, int k)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int firstindex = -1;
    while (s <= e)
    {
        if (k == arr[mid])
        {
            firstindex = mid;
            e = mid - 1;
        }
        else if (k > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return firstindex;
}
int lastOcc(vector<int> &arr, int n, int k)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int lastindex = -1;
    while (s <= e)
    {
        if (k == arr[mid])
        {
            lastindex = mid;
            s = mid + 1;
        }
        else if (k > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return lastindex;
}
pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    pair<int, int> result;
    int firstindex = firstOcc(arr, n, k);
    int lastindex = lastOcc(arr, n, k);
    result = make_pair(firstindex, lastindex);
    return result;
}
int main()
{
    vector<int> num = {1, 1, 2, 3, 3, 3, 3, 4, 5};
    int k = 3;
    pair<int, int> result = firstAndLastPosition(num, 9, k);

    cout << result.first << " " << result.second << endl;
}