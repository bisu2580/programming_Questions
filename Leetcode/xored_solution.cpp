#include <iostream>
#include <vector>
using namespace std;
int xorOperation(int n, int start)
{
    // int arr[n];
    vector<int> arr(n);
    int xored = start;
    for (int i = 1; i < n; i++)
    {
        arr[i] = start + 2 * i;
        xored = (xored ^ arr[i]);
    }
    return xored;
}
int main()
{
    int n = 5, start = 0;
    cout << "The xored result is " << xorOperation(n, start);
}