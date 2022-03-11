/*
An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.
*/

#include <iostream>
#include <vector>
using namespace std;

bool isMonotonic(vector<int> &nums)
{
    bool res1 = false, res2 = false;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] < nums[i + 1])
        {
            res1 = true;
        }
        else if (nums[i] > nums[i + 1])
        {
            res2 = true;
        }
    }

    if (res1 && res2)
    {
        return false;
    }
    return true;
}

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    cout << boolalpha;
    cout << isMonotonic(nums);
}