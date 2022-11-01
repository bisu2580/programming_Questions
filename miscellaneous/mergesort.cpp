#include <bits/stdc++.h>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int index = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[index++];
    }
    index = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[index++];
    }

    int index1 = 0;
    int index2 = 0;
    int arrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[arrayIndex++] = first[index1++];
        }
        else
        {
            arr[arrayIndex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[arrayIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[arrayIndex++] = second[index2++];
    }
    delete[] first;
    delete[] second;
}
void print(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;

    mergeSort(arr, s, mid);

    mergeSort(arr, mid + 1, e);

    cout << endl
         << endl
         << "s= " << s << " and "
         << "e= " << e << endl
         << endl;

    merge(arr, s, e);
}
int main()
{
    int arr[] = {9, 10, 45, 62, 43, 78};
    int n = 6;
    mergeSort(arr, 0, 5);
    print(arr, 6);
}