#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    nums1.resize(m);
    nums2.resize(n);
    int i = 0;
    while (i < nums2.size())
    {
        int num = nums2[i];
        nums1.push_back(num);
        i++;
    }
    sort(nums1.begin(), nums1.end());
}
int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;
    merge(nums1, m, nums2, n);
    cout << "After merging, the list is :\n";
    for (int i : nums1)
    {
        cout << i << " ";
    }
}