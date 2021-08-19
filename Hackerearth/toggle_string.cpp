#include <bits/stdc++.h>
using namespace std;
int main()
{
    string me;
    cin >> me;
    for (int i = 0; i < me.size(); i++)
    {
        if (isupper(me[i]))
        {

            me[i] = tolower(me[i]);
        }
        else
        {
            me[i] = toupper(me[i]);
        }
    }
    cout << me;
    return 0;
}