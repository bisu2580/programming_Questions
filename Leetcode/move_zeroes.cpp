
#include <iostream>
#include <vector>
using namespace std;

// Approach 1- Without using extra space
void moveZeroes(vector<int> &nums)
{
    int i = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[i++], nums[j]);
        }
    }
}
// Approach 2- using extra space
// void moveZeros(vector<int> &nums)
// {
//     vector<int> wow(nums.size());
//     int i = 0, j = 0;
//     while (i < nums.size())
//     {
//         if (nums[i] != 0)
//         {
//             wow[j] = nums[i];
//             j++;
//         }
//         i++;
//     }
//     nums = wow;
// }
int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);
    cout << "The contents of array after moving all zeroes is \n";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}