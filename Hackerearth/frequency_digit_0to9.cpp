#include <bits/stdc++.h>
using namespace std;

int check(string &s, char num, int count)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (num == s[i])
        {
            count += 1;
            s.erase(s.begin() + i);
            i--;
            n = s.size();
        }
    }
    return count;
}
int main()
{
    string me;
    cin >> me;
    for (int i = 48; i < 58; i++)
    {
        cout << i - '0' << " " << check(me, i, 0) << endl;
    }
    return 0;
}