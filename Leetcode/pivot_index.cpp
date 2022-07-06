#include <bits/stdc++.h>
using namespace std;
int pivotIndex(vector<int> &nums)
{

    int presum, postsum;
    int total = 0;

    for (int i = 0; i < nums.size(); i++)
    {

        total += nums[i];
    }

    presum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        postsum = total - presum - nums[i];

        if (presum == postsum)
        {
            return i;
        }
        presum += nums[i];
    }
    return -1;
}
int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout << pivotIndex(nums);
}