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

int main()
{
    int x, n;
    cin >> x >> n;

    cout << powerEfficient(x, n);
    return 0;
}