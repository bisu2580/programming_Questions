#include <bits/stdc++.h>
using namespace std;
void tell(int num, string arr[])
{
    int ans = num % 10;
    num = num / 10;
    if (ans == 0)
    {
        return;
    }
    tell(num, arr);
    cout << arr[ans] << " ";
}
int main()
{
    string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    tell(4216, arr);
}