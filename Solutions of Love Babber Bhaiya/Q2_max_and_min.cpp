#include <bits/stdc++.h>
using namespace std;
int main()
{
     int arr[] = {14, 25, 12, 76, 43, 87, 97, 43};
     int n = (sizeof(arr) / sizeof(int));
     int maxi = INT_MIN, mini = INT_MAX;
     for (int i = 0; i < n; i++)
     {
          maxi = max(maxi, arr[i]);
          mini = min(mini, arr[i]);
     }
     cout << "maximum is "
          << maxi << endl;
     cout << "miniimum is "
          << mini << endl;

     return 0;
}