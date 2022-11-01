#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    void calculate(vector<int> arr, int index, vector<int> ans, vector<vector<int>> &output)
    {

        if (index >= arr.size())
        {
            output.push_back(ans);
            return;
        }

        calculate(arr, index + 1, ans, output);

        ans.push_back(arr[index]);

        calculate(arr, index + 1, ans, output);
    }

public:
    vector<vector<int>> subsets(vector<int> &nums)
    {

        vector<int> ans;

        vector<vector<int>> output;

        calculate(nums, 0, ans, output);

        return output;
    }
};
int main()
{
    vector<int> nums = {1, 2, 3};
    Solution s;
    vector<vector<int>> ans = s.subsets(nums);
    for (vector<int> i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}