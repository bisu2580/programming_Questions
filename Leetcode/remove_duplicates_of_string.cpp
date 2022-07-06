#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string s)
{
    string test = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (test.size() > 0 && test.back() == s[i])
        {
            test.pop_back();
        }
        else
        {
            test.push_back(s[i]);
        }
    }
    return test;
}
int main()
{

    string input = "azxxzy";
    input = removeDuplicates(input);
    for (auto i : input)
    {
        cout << i;
    }
}