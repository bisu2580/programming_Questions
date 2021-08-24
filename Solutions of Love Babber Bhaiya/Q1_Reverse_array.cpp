#include <iostream>
using namespace std;
void reversearray(int *arr, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    return;
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