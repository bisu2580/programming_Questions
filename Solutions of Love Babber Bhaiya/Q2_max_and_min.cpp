#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]{14, 25, 12, 76, 43, 87, 97, 43};
    int n = (sizeof(arr) / sizeof(int));
    int maxi = 0, mini = 0;
    sort(arr, arr + n);
    mini = arr[0];
    maxi = arr[n - 1];
    cout << "maximum is "
         << maxi << endl;
    cout << "miniimum is "
         << mini << endl;

    return 0;
}