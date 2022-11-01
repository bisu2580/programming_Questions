#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    void comb(string digits, int index, vector<string> &ans, string output, vector<string> mapping)
    {

        // base case
        if (index >= digits.length())
        {
            ans.push_back(output);
            return;
        }

        int num = digits[index] - '0';
        string value = mapping[num];

        for (int i = 0; i < value.length(); i++)
        {
            output.push_back(value[i]);
            comb(digits, index + 1, ans, output, mapping);
            // backtracking
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {

        vector<string> ans;
        if (digits.length() == 0)
        {
            return ans;
        }
        string output = "";
        int index = 0;
        vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        comb(digits, index, ans, output, mapping);
        return ans;
    }
};
int main()
{
    string digits = "23";
    Solution s;
    vector<string> ans = s.letterCombinations(digits);
    for (string i : ans)
    {
        for (auto j : i)
        {
            cout << j;
        }
        cout << endl;
    }
}