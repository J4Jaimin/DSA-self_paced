#include <bits/stdc++.h>
using namespace std;

int cloneGcd(int a, int b)
{
    int gcd = min(a, b);

    while (gcd > 0)
    {
        if (a % gcd == 0 and b % gcd == 0)
        {
            break;
        }
        gcd--;
    }

    return gcd;
}

int euclidianSubtraction(int a, int b)
{

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    return a;
}

int optimizedEuclidian(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return optimizedEuclidian(b, a % b);
    }
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << optimizedEuclidian(a, b) << endl;

    return 0;
}