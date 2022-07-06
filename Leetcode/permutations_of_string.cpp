#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    // checking two characters are equal or not
    bool checkEqual(int a[26], int b[26])
    {
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != b[i])
            {
                return false;
            }
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2)
    {
        // declaring constant size alphabet array to store count of alphabets
        int count[26] = {0};

        // storing the count of elements of s1
        for (int i = 0; i < s1.length(); i++)
        {
            int index = s1[i] - 'a';
            count[index]++;
        }

        int i = 0;
        int window = s1.length();
        int count2[26] = {0};

        // storing count of string s2 in another array
        while (i < window && i < s2.length())
        {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        // checking first window present or not
        if (checkEqual(count, count2))
        {
            return true;
        }

        // After window is completed, decreasing count of old window elements and increasing count of new window elements
        while (i < s2.length())
        {
            char ch = s2[i];
            int index = ch - 'a';
            count2[index]++;

            char old = s2[i - window];
            index = old - 'a';
            count2[index]--;

            i++;

            if (checkEqual(count, count2))
                return true;
        }

        return false;
    }
};

int main()
{
    Solution permutation;
    string s1 = "ab";
    string s2 = "eidbaooo";
    if (permutation.checkInclusion(s1, s2))
    {
        cout << "s2 contains permutation of string";
    }
}