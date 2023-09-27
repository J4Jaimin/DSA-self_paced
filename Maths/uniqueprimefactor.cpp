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

vector<int> getPrimeFactor(int n)
{
    vector<int> primeFactor;

    if (n % 2 == 0)
        primeFactor.push_back(2);

    if (n % 3 == 0)
        primeFactor.push_back(3);

    for (int i = 5; i <= n; i += 6)
    {
        if (n % i == 0 and isPrime(i))
        {
            primeFactor.push_back(i);
        }
        if (n % (i + 2) == 0 and isPrime(i + 2))
        {
            primeFactor.push_back(i + 2);
        }
    }

    return primeFactor;
}

int main()
{
    int n;
    cin >> n;

    vector<int> primeFactors = getPrimeFactor(n);

    for (int i = 0; i < primeFactors.size(); i++)
    {
        cout << primeFactors[i] << " ";
    }
    return 0;
}