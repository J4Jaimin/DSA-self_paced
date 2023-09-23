#include <bits/stdc++.h>
using namespace std;

bool isPrimeOrNot(int n)
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
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    isPrimeOrNot(n) ? cout << "Prime" : cout << "Not Prime";
    return 0;
}