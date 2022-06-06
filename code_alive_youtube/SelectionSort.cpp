#include <iostream>
using namespace std;

void SelectionSort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
    }
}
int main()
{

    int arr[] = {2, 1, 6, 8, 3, 5};
    SelectionSort(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}