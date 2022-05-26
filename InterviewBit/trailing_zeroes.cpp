#include <iostream>
using namespace std;

int getZeroes(int A)
{
    int count = 0;
    while ((A & 1) % 10 == 0)
    {
        A = A >> 1;
        count++;
    }
    return count;
}

int main()
{
    int n = 18;
    cout << "No of trailing zeroes are " << getZeroes(n);
}