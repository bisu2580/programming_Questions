#include <iostream>
using namespace std;
int main()
{
    long long h;
    cin >> h;
    int num[h];
    for (int i = 0; i < h; i++)
    {
        cin >> num[i];
    }
    for (int j = 0; j < h; j++)
    {
        long long rem = num[j] % 10;
        num[j] = rem;
    }
    if (num[h - 1] == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}