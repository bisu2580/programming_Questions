#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    void solve(vector<int> nums, int index, vector<vector<int>> &ans)
    {

        if (index >= nums.size())
        {
            ans.push_back(nums);
            return;
        }

        for (int j = index; j < nums.size(); j++)
        {

            swap(nums[index], nums[j]);

            solve(nums, index + 1, ans);

            // backtracking
            swap(nums[index], nums[j]);
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {

        vector<vector<int>> ans;
        int index = 0;
        solve(nums, index, ans);
        return ans;
    }
};
int main()
{
    vector<int> nums = {1, 2, 3};
    Solution s;
    vector<vector<int>> ans = s.permute(nums);
    for (vector<int> i : ans)
    {
        for (auto j : i)
        {
            cout << j;
        }
        cout << endl;
    }
}