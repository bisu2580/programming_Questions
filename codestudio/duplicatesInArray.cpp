#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr)
{
    int s;
    int e;
    for (s = 0; s < arr.size() - 1; s++)
    {
        for (e = s + 1; e < arr.size(); e++)
        {
            if (arr[s] == arr[e])
            {
                return arr[s];
            }
        }
    }
    return 0;
}
int main()
{
    vector<int> arr = {1, 2, 1, 2};
    cout << findDuplicate(arr);
}