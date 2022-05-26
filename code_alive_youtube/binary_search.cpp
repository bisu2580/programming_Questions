#include <iostream>
using namespace std;

int binary_search(int arr[], int left, int right, int num)
{

    int mid;
    while (left <= right)
    {
        mid = (left + right) / 2;

        if (num == arr[mid])
        {
            return mid;
        }
        else if (num < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return -1;
}

int main()
{

    int arr[] = {12, 17, 26, 57, 98, 109, 119};
    int index = binary_search(arr, 0, 6, 98);
    cout << "98 is present at index " << index;
}
