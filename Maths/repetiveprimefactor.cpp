#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 or n == 3)
        return true;
    if (n % 2 == 0 or n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 or n % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

vector<int> getRepetivePrimeFactorNaive(int n)
{
    vector<int> primeFector;

    for (int i = 2; i < n; i++)
    {
        if (isPrime(2))
        {
            int pn = i;

            while (n % pn == 0)
            {
                primeFector.push_back(i);
                pn = pn * i;
            }
        }
    }

    return primeFector;
}

void getRepetivePrimeFactorOptimized(int n)
{
    // vector<int> primeFector;

    if (n <= 1)
        return;

    if (n % 2 == 0)
    {
        while (n % 2 == 0)
        {
            cout << "2"
                 << " ";
            n /= 2;
        }
    }

    if (n % 3 == 0)
    {
        while (n % 3 == 0)
        {
            cout << "3"
                 << " ";
            n /= 3;
        }
    }

    for (int i = 5; i * i <= n; i += 6)
    {
        if (isPrime(i))
        {
            while (n % i == 0)
            {
                cout << i << " ";
                n /= i;
            }
        }

        if (isPrime(i + 2))
        {
            while (n % (i + 2) == 0)
            {
                cout << (i + 2) << " ";
                n /= (i + 2);
            }
        }
    }

    if (n > 3)
        cout << n;
    // return primeFector;
}

void getPrimeFactorEfficient(int n)
{
    // vector<int> primeFactor;

    if (n <= 1)
        return;

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime(i))
        {
            while (n % i == 0)
            {
                // primeFactor.push_back(i);
                cout << i << " ";
                n /= i;
            }
        }
    }

    if (n > 1)
        cout << n;

    // return primeFactor;
}

void getPrimeFactorsUsingSieveOfEretosthenes(int n)
{
    vector<bool> isPrime(n + 1, true);
    vector<int> lowestPrime(n + 1, 0);
    vector<int> highestPrime(n + 1, 0);

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            lowestPrime[i] = highestPrime[i] = i;

            for (int j = 2 * i; j <= n; j += i)
            {
                isPrime[j] = false;
                highestPrime[j] = i;
                if (lowestPrime[j] == 0)
                    lowestPrime[j] = i;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
        }
    }

    // vector<int> primeFactors;

    // while (n > 1)
    // {
    //     int prime_factor = lowestPrime[n];

    //     while (n % prime_factor == 0)
    //     {
    //         n /= prime_factor;
    //         primeFactors.push_back(prime_factor);
    //     }
    // }

    // for (int i = 0; i < primeFactors.size(); i++)
    // {
    //     cout << primeFactors[i] << " ";
    // }
}

int main()
{
    int n;
    cin >> n;

    getPrimeFactorsUsingSieveOfEretosthenes(n);

    // for (int i = 0; i < repetivePrimeFactor.size(); i++)
    // {
    //     cout << repetivePrimeFactor[i] << " ";
    // }
    return 0;
}