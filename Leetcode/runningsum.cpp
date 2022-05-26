#include <bits/stdc++.h>
using namespace std;

vector<int> RunningSum(vector<int> &nums)
{

    vector<int> result;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        result.push_back(sum);
    }
    nums = result;
    return nums;
}

int main()
{

    vector<int> ini = {2, 4, 6, 2, 5, 7};
    ini = RunningSum(ini);
    cout << "Running summed modified array:\n";
    for (int i = 0; i < ini.size(); i++)
    {
        cout << ini[i] << " ";
    }
}