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
            return false;
    }

    return true;
}

// time complexity is n*sqrt(n) in brute force technique.

void sieveOfEretosthenes(int n)
{
    vector<int> isPrime(n + 1, true);

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
            cout << i << " ";
    }
}

void sieveOfEretosthenesOptimized(int n)
{
    vector<int> primeNo(n + 1, true);

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime(i))
        {
            // cout << i << " ";
            for (int j = i * i; j <= n; j += i)
            {
                primeNo[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (primeNo[i])
            cout << i << " ";
    }
}

int main()
{

    int n;
    cin >> n;

    // for (int i = 2; i <= n; i++)
    // {
    //     if (isPrime(i))
    //         cout << i << " ";
    // }

    sieveOfEretosthenesOptimized(n);
    return 0;
}