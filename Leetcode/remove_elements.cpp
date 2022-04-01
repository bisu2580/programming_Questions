#include <iostream>
#include <vector>

using namespace std;
int removeElement(vector<int> &nums, int val)
{
    int j;

    int k = 0;
    while (k < nums.size())
    {
        int size = nums.size();
        if (val == nums[k])
        {
            for (int i = k + 1; i < nums.size(); i++)
            {
                nums[i - 1] = nums[i];
            }
            nums.resize(size - 1);
        }
        else
        {
            k++;
        }
    }
    return nums.size();
}

int main()
{
    vector<int> nums = {2, 2, 3, 3, 2};
    int test = 3;
    cout << "The size of the array after deleting " << test << " is " << removeElement(nums, test);
}