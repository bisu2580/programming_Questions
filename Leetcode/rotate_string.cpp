#include <bits/stdc++.h>
using namespace std;
// This is an efficient algorithm where we took extra space as 2 double ended queues.
bool rotateString(string s, string goal)
{
    deque<char> num;
    deque<char> goal2;
    // inserting elements of string s into num
    for (int i = 0; i < s.size(); i++)
    {
        num.push_back(s[i]);
    }
    // inserting elements of string s into goal2
    for (int i = 0; i < goal.size(); i++)
    {
        goal2.push_back(goal[i]);
    }
    int n = s.length();

    // here we first check the equality of goal and string and if this is false we keep removing the front element of deque and push it into back of deque, otherwise we return true.

    for (int i = 0; i < n; i++)
    {
        if (num == goal2)
        {
            return true;
        }
        int target = num.front();
        num.pop_front();
        num.push_back(target);
    }
    return false;
}
int main()
{
    string s = "abcde";
    string goal = "cdeab";
    cout << boolalpha;
    cout << rotateString(s, goal);
}