// This program displays the no of bits of each numbers starting from 1 to that number.
#include <iostream>
#include <vector>
using namespace std;
vector<int> countBits(int n)
{
    vector<int> nums;
    nums.push_back(0);
    for (int i = 1; i <= n; i++)
    {

        int count = 0;
        int num = i;
        while (num > 0)
        {
            num = num & (num - 1);
            count++;
        }
        nums.push_back(count);
    }
    return nums;
}
int main()
{
    int a = 2;
    vector<int> num = countBits(a);
    for (auto i : num)
    {
        cout << i << " ";
    }
}