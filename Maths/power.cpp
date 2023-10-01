#include <bits/stdc++.h>
using namespace std;

int power(int x, int n)
{
    int pow = 1;

    for (int i = 0; i < n; i++)
    {
        pow *= x;
    }

    return pow;
}

// but here space complexity is  O(logn).

int powerEfficient(int x, int n)
{
    if (n == 1)
    {
        return x;
    }
    else if (n % 2 == 0)
    {
        return powerEfficient(x, n / 2) * powerEfficient(x, n / 2);
    }
    else
    {
        return powerEfficient(x, n - 1) * x;
    }
}

// Efficent solution with space complexity O(1) and time complexity O(logn).

int powerIterativeEfficient(int x, int n)
{

    if (n == 1)
    {
        return x;
    }

    int res = 1;

    while (n > 0)
    {
        if (n & 1 == 1)
        {
            res *= x;
        }

        n /= 2;
        x *= x;
    }

    return res;
}

int main()
{
    int x, n;
    cin >> x >> n;

    cout << powerIterativeEfficient(x, n);
    return 0;
}