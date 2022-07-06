/*
********************************Segmented Sieve******************************************
Given a number n, print all primes smaller than n. For example, if the given number is 10, output 2, 3, 5, 7.
We are going to take help of sieve of Eratosthenes
*/

#include <bits/stdc++.h>
using namespace std;
vector<bool> makePrime(int num)
{
    vector<bool> isPrime(num + 1, true);

    // 0 and 1 are not prime.
    isPrime[0] = false;
    isPrime[1] = false;

    int count = 0;
    for (int i = 2; i < num; i++)
    {
        // in each iteration we count the prime numbers and make the multiples of the number as false.By doing this all composite number will be marked as false and prime numbers will remain true.
        if (isPrime[i])
        {
            count++;
            for (int j = 2 * i; j < num; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

int main()
{
    int number;
    cout << "Enter the range\n";
    cin >> number;
    vector<bool> primes = makePrime(number);
    for (int i = 0; i < primes.size() - 1; i++)
    {
        if (primes[i])
        {
            cout << i << " ";
        }
    }
}