#include <bits/stdc++.h>
using namespace std;
void restore(int *arr, int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
}
int main()
{
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    restore(arr, num);
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
}