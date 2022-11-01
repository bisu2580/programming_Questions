#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle)
{

    int num = haystack.find(needle);

    return num;
}

int main()
{
    string s = "abcdefeadc";
    string needle = "cde";
    cout << "first occurance of " << needle << " is at index ";
    cout << strStr(s, needle);
}