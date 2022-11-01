#include <bits/stdc++.h>
using namespace std;
/*Approach 1 (in constant space O(1))*/

void reverseArray(vector<int> &v, int left, int right)
{
    while (left <= right)
    {
        swap(v[left++], v[right--]);
    }
}

void rotate(vector<int> &nums, int k)
{
    int size = nums.size();
    int rotate = k % size;
    int left = 0;
    int right = size - rotate - 1;

    reverseArray(nums, left, right);
    reverseArray(nums, right + 1, size - 1);
    reverseArray(nums, 0, size - 1);
}

int main()
{
    vector<int> num = {2, 3, 5, 1, 9, 6, 8, 7};
    int k = 3;
    rotate(num, k);
    // After rotating the vector

    for (int i : num)
    {
        cout << i << " ";
    }
}