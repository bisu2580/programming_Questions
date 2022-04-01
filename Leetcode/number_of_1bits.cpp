#include <iostream>
using namespace std;
int hammingWeight(uint32_t n)
{
    int count = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
int main()
{
    uint32_t num = 0000000000000000000000000000011;
    cout << "The number of 1 bits are " << hammingWeight(num);
    return 0;
}