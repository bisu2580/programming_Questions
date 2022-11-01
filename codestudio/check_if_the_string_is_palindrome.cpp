#include <bits/stdc++.h>
using namespace std;
bool isclean(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    return false;
}
string changeCase(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}
bool checkPalindrome(string s)
{
    string clean = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (isclean(s[i]))
        {
            clean.push_back(s[i]);
        }
    }

    clean = changeCase(clean);

    int start = 0;
    int end = clean.length() - 1;

    while (start <= end)
    {
        if (clean[start++] != clean[end--])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s = "N2 i&nJA?a& jnI2n";
    cout << checkPalindrome(s);
}