#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &boards, int k, int mid)
{
    int boardLength = 0;
    int painterCount = 1;
    for (int i = 0; i < boards.size(); i++)
    {
        if (boardLength + boards[i] <= mid)
        {
            boardLength += boards[i];
        }
        else
        {
            painterCount++;
            if (painterCount > k || boards[i] > mid)
            {
                return false;
            }
            boardLength = boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < boards.size(); i++)
    {
        sum += boards[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (isPossible(boards, k, mid))
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
    vector<int> boards = {5, 5, 5, 5};
    int k = 2;
    cout << findLargestMinDistance(boards, k);
}