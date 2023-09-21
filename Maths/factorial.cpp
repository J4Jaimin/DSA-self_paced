#include <bits/stdc++.h>
using namespace std;

int factorialIterative(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

int factorialRecursive(int n)
{
    if (n == 1 or n == 0)
    {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int main()
{
    int n;
    cin >> n;

    // cout << factorialIterative(n);

    cout << factorialRecursive(n);

    return 0;
}