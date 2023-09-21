#include <bits/stdc++.h>
using namespace std;

// Naive approach

int countTrailingZeroInFact(int n)
{
    int trailZero = 0;
    long long fact = 1;

    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }

    while (fact % 10 == 0)
    {
        trailZero++;
        fact /= 10;
    }

    return trailZero;
}

// Efficient approach

int countTrailingZeroInFactEff(long long n)
{
    int trailZero = 0;

    for (int i = 5; i <= n; i *= 5)
    {
        trailZero += n / i;
    }

    return trailZero;
}

int main()
{
    long long n;
    cin >> n;

    cout << countTrailingZeroInFactEff(n);

    return 0;
}