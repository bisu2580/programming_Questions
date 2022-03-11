/*Given an integer array nums of 2n integers, group these integers into n pairs (a1, b1), (a2, b2), ..., (an, bn) such that the sum of min(ai, bi) for all i is maximized. Return the maximized sum.*/
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int arrayPairSum(vector<int> &nums)
{
    int sum = 0;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i += 2)
    {
        sum += nums[i];
    }
    return sum;
}
int main()
{
    vector<int> nums = {1, 4, 3, 2};
    cout << "The maximised sum is " << arrayPairSum(nums);
}