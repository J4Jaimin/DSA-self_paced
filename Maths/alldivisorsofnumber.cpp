#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    if (n == 2 or n == 3)
    {
        return true;
    }
    if (n % 2 == 0 or n % 3 == 0)
    {
        return false;
    }

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 or n % (i + 2) == 0)
            return false;
    }

    return true;
}

void allDivisorOfN(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (isPrime(n))
        {
            cout << "1 " << n;
            return;
        }

        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

void allDivisorsOfNEfficient(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (isPrime(n))
        {
            cout << "1 " << n;
            return;
        }

        if (n % i == 0)
        {
            cout << i << " ";
            if (i != n / i)
                cout << n / i << " ";
        }
    }
}

int isPerfectNumber(long long N)
{
    // code here

    int sumOfFactor = 0;

    for (int i = 1; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            sumOfFactor += i;

            if (N / i != N)
                sumOfFactor += N / i;
        }
    }

    if (N == sumOfFactor)
        return 1;

    else
        return 0;
}

void allDivisorsOfNSorted(int n)
{
    int i;

    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    if (i - (n / i) == 1)
    {
        i--;
    }
    for (; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << n / i << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;

    cout << isPerfectNumber(n);
    return 0;
}