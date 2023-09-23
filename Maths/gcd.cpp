#include <bits/stdc++.h>
using namespace std;

int cloneGcd(int a, int b)
{
    int gcd = 0;

    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 and b % i == 0)
        {
            gcd = max(gcd, i);
        }
    }

    return gcd;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << cloneGcd(a, b) << endl;

    return 0;
}