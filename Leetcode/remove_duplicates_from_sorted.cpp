// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.
#include <iostream>
#include <vector>

using namespace std;
int removeDuplicates(vector<int> &nums)
{

    int ind = 1;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] != nums[i + 1])
        {
            nums[ind++] = nums[i + 1];
        }
    }
    return ind;
}
int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    cout << "After removing duplicates the number of elements in the array is " << removeDuplicates(nums);
}