
#include <bits/stdc++.h>
using namespace std;
vector<int> addToArrayForm(vector<int> &num, int k)
{

    int n = num.size();
    int i = n - 1;
    vector<int> res;

    while (i >= 0 || k > 0)
    {

        if (i >= 0)
        {
            res.push_back((num[i] + k) % 10);
            k = (num[i] + k) / 10;
            i--;
        }
        else
        {
            res.push_back(k % 10);
            k /= 10;
        }
    }

    reverse(res.begin(), res.end());
    num = res;
    return num;
}
int main()
{
    vector<int> arr = {1, 3, 5, 0};
    int num = 54;
    arr = addToArrayForm(arr, num);
    cout << "After sum the array form is \n";
    for (int i : arr)
    {
        cout << i << " ";
    }
}
