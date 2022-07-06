/*
Hi, I have done this problem using map. Here first I sorted the array,then stored the count
of elements in a map.Then I copied the elements to original array and then checked for duplicates.
If duplicated found,return true,else return false.
*/
#include <bits/stdc++.h>
using namespace std;
bool uniqueOccurrences(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    map<int, int> num;
    int i = 0, j = 0, count = 0;
    while (i < arr.size() && j < arr.size())
    {
        if (arr[i] == arr[j])
        {
            count++;
            j++;
        }
        else
        {
            // stroring counts in map
            num.insert(pair<int, int>(arr[i], count));
            i = j;
            count = 0;
        }
    }
    if (count != 0)
    {
        num.insert(pair<int, int>(arr[i], count));
    }
    // pushing only counts to array
    arr.clear();
    map<int, int>::iterator it;
    for (it = num.begin(); it != num.end(); ++it)
    {
        arr.push_back(it->second);
    }

    // checking duplicates,if any duplicate is found,return false
    sort(arr.begin(), arr.end());
    int s = 0, e = 1;
    while (s < arr.size() && e < arr.size())
    {
        if ((arr[s++] ^ arr[e++]) == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> num = {1, 2, 2, 1, 1, 3};
    cout << uniqueOccurrences(num);
}

// Approach 2
/*
bool uniqueOccurrences(vector<int> &arr)
{
     map<int,int> num;
     set<int> sett;
    for(auto i:arr){
        num[i]++;
    }
    for(auto i:num){
        sett.insert(i.second);
    }
     return num.size()==sett.size();
}

*/