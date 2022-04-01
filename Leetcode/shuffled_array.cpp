#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int> &nums, int n)
{
    vector<int> result(2 * n, 0);
    int ptr1 = 0, ptr2 = n;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i % 2 != 0)
        {
            result[i] = nums[ptr2];
            ptr2++;
        }
        else
        {
            result[i] = nums[ptr1];
            ptr1++;
        }
    }
    return result;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 4, 3, 2, 1};
    int n = 4;
    cout << "The shuffled array is \n";
    vector<int> result = shuffle(nums, n);
    cout << "[";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << "]";
}