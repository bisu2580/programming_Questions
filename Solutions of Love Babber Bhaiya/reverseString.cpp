#include <bits/stdc++.h>
using namespace std;
void reversestring(string &s, int i, int j)
{
    if (i > j)
    {
        return;
    }
    swap(s[i], s[j]);
    reversestring(s, i + 1, j - 1);
}
int main()
{
    string num = "Biswajit";
    reversestring(num, 0, 7);
    cout << num.data();
}