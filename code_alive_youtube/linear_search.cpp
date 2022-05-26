#include <iostream>
using namespace std;
int linear_search(int arr[], int n, int no_to_found)
{
    for (int i = 0; i < n; i++)
    {
        if (no_to_found == arr[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int size, target;
    cout << "Enter the size of the array\n";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Now enter the number to search\n";
    cin >> target;
    int result = linear_search(arr, size, target);
    if (result > 0)
    {
        cout << target << " Found at position " << result + 1 << " from beginning of the array\n";
    }
    else
    {
        cout << "Error! the number is not found\n";
    }
}