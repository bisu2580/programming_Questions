#include <bits/stdc++.h>
using namespace std;
void sort012(int *arr, int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main()
{
    int arr[] = {0, 1, 2, 2, 1, 0};
    sort012(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}

// Approach 2
//  void sort012(int *arr, int n)
//  {
//      int num[3] = {0};
//      int j = 0;
//      for (int i = 0; i < n; i++)
//      {
//          num[arr[i]]++;
//      }
//      for (int i = 0; i < 3; i++)
//      {
//          int numb = num[i];
//          while (numb--)
//          {
//              arr[j] = i;
//              j++;
//          }
//      }
//  }