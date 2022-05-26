#include <bits/stdc++.h>
using namespace std;

string addBinary(string a, string b)
{

    string result;
    int i = a.length() - 1;
    int j = b.length() - 1;
    int carry = 0;

    while (i > -1 || j > -1)
    {
        int sum = carry;
        if (i >= 0)
        {
            sum += a[i--] - '0';
        }
        if (j >= 0)
        {
            sum += b[j--] - '0';
        }
        if (sum > 1)
            carry = 1;
        else
            carry = 0;
        result += to_string(sum % 2);
    }

    if (carry)
        result += "1";
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    string a = "1001";
    string b = "1010";
    string res = addBinary(a, b);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
    }
}