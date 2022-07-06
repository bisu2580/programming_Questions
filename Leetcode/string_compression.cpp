
#include <bits/stdc++.h>
using namespace std;
int compress(vector<char> &chars)
{
    int i = 0;
    int j;
    int index = 0;
    int size = chars.size();
    while (i < size)
    {
        j = i + 1;
        while (j < size && chars[i] == chars[j])
        {
            j++;
        }

        chars[index++] = chars[i];
        int count = j - i;
        if (count > 1)
        {
            string res = to_string(count);
            for (char ch : res)
            {
                chars[index++] = ch;
            }
        }
        i = j;
    }
    return index;
}
int main()
{

    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout << compress(chars);
}
