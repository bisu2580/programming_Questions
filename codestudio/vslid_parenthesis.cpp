#include <bits/stdc++.h>
using namespace std;

bool matches(char top, char ch)
{
    if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']') && top == '[')
    {
        return true;
    }
    return false;
}
bool isValidParenthesis(string expression)
{
    stack<char> num;
    for (int i = 0; i < expression.size(); i++)
    {
        char ch = expression[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            num.push(ch);
        }
        else
        {
            if (!num.empty())
            {
                char top = num.top();
                if (matches(top, ch))
                {
                    num.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if (num.empty())
    {
        return true;
    }
    return false;
}

int main()
{
}