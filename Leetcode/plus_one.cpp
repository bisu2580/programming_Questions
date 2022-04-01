#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    vector<int> nice = digits;
    int idx = nice.size() - 1;
    while (idx >= 0)
    {
        if (nice[idx] < 9)
        {
            nice[idx] += 1;
            return nice;
        }
        else
        {
            nice[idx] = 0;
        }
        idx--;
    }
    nice.insert(nice.begin(), 1);
    return nice;
}
int main()
{
    vector<int> digits = {9, 9, 9};
    digits = plusOne(digits);
    cout << "The modified array is \n";
    for (int i : digits)
    {
        cout << i << " ";
    }
}