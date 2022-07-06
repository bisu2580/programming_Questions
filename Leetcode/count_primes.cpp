/* This question can be solved efficiently by sieve of Eratosthenes,
where we take a boolean array and make all numbers prime.Then starting
from number 2, we make the multiples of that number as false.At last the
prime numbers have value true and we count them.*/

#include <bits/stdc++.h>
using namespace std;
int countPrimes(int n)
{
    vector<bool> isPrime(n + 1, true);

    // 0 and 1 are not prime.
    isPrime[0] = false;
    isPrime[1] = false;

    int count = 0;
    for (int i = 2; i < n; i++)
    {
        // in each iteration we count the prime numbers and make the multiples of the number as false.By doing this all composite number will be marked as false and prime numbers will remain true.
        if (isPrime[i])
        {
            count++;
            for (int j = 2 * i; j < n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
    return count;
}
int main()
{
    int num = 40;
    cout << "The number of prime numbers between 1 and " << num << " are " << countPrimes(num);
}