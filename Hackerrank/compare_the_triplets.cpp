#include <bits/stdc++.h>
using namespace std;
void compare(int *arr1, int *arr2)
{
    int alice = 0, bob = 0;
    for (int i = 0; i < 3; i++)
    {
        if (arr1[i] > arr2[i])
        {
            alice++;
        }
        else if (arr1[i] < arr2[i])
        {
            bob++;
        }
    }
    cout << alice << " " << bob;
}
int main()
{
    int arr1[3];
    int arr2[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> arr2[i];
    }
    compare(arr1, arr2);
    return 0;
}