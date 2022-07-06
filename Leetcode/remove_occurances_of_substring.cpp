#include <bits/stdc++.h>
using namespace std;
string removeOccurrences(string s, string part)
{
    int size = part.size();
    // determine the leftmost occurance of part in the string s.
    int position = s.find(part);

    // Keep doing this untill there are no substring present in the string.
    while (position >= 0)
    {
        // Erase the range of characters from the leftmost index of substring to end of substring from the string s
        s.erase(position, size);
        position = s.find(part);
    }
    return s;
}
int main()
{
    string num = "axxxxyyyyb";
    string toFind = "xy";
    toFind = removeOccurrences(num, toFind);
    cout << "After removing substrings, the resultant string :\n"
         << toFind.data();
}
