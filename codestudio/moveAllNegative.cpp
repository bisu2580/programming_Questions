#include <bits/stdc++.h>
using namespace std;
bool isCorrect(vector<int> nums, int count)
{
    for (int i = 0; i < count; i++)
    {
        if (nums[i] > 0)
            return false;
    }
    return true;
}
void rearrange(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (nums[mid] < 0)
        {
            swap(nums[mid], nums[start]);
            start++;
        }
        else
        {
            swap(nums[mid], nums[end]);
            end--;
        }
        mid = start + (end - start) / 2;
    }
}
// implementation
vector<int> separateNegativeAndPositive(vector<int> &nums)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {
            count++;
        }
    }
    rearrange(nums);
    return nums;
}
int main()
{
    vector<int> nums = {1, -5, -5, 3};
    nums = separateNegativeAndPositive(nums);
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {
            count++;
        }
    }
    // To check correctness
    if (isCorrect(nums, count))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}