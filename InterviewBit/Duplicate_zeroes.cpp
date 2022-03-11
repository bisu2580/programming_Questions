#include <iostream>
#include <vector>
using namespace std;

void duplicateZeros(vector<int> &arr)
{
    vector<int> arr2;
    for (int i : arr)
    {
        arr2.push_back(i);
        if (i == 0)
        {
            arr2.push_back(0);
        }
    }
    if (arr2.size() == arr.size())
    {
        arr = arr2;
    }
    else
    {
        int n = arr2.size() - arr.size();
        if (n < 0)
        {
            n = n * -1;
        }
        while (n--)
        {
            arr2.pop_back();
        }
        arr = arr2;
    }
}
int main()
{
    vector<int> nums = {1, 0, 2, 3, 0, 4, 5, 0};
    duplicateZeros(nums);
    cout << "The modified Array is \n";
    cout << "[";
    for (auto i : nums)
    {
        cout << i << " ";
    }
    cout << "]";
}