#include <bits/stdc++.h>
using namespace std;
int findUnique(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum ^ arr[i];
    }
    return sum;
}
int main()
{
    int arr[1000] = {0};
    int size;
    cout << "Enter the size: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Unique element is " << findUnique(arr, size);
}