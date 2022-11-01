#include <bits/stdc++.h>
using namespace std;
void reversearray(int *arr, int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        swap(arr[s++], arr[e--]);
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
    reversearray(arr, num);
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
}