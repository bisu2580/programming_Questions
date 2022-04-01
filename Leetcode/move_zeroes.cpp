
#include <iostream>
#include <vector>
using namespace std;

// Approach 1- Without using extra space
void movezeros(vector<int> &nums)
{
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[j] = nums[i];
            j++;
        }
    }
    /*using while loop*/

    while (j < nums.size())
    {
        nums[j] = 0;
        j++;
    }
}
// Approach 2- using extra space
// void movezeros(vector<int> &nums)
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
    movezeros(nums);
    cout << "The contents of array after moving all zeroes is \n";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}