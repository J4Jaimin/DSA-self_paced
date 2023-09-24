#include <bits/stdc++.h>
using namespace std;

int LCM(int a, int b)
{
    for (int i = max(a, b); i <= (a * b); i++)
    {
        if (i % a == 0 and i % b == 0)
        {
            return i;
            break;
        }
    }

    return -1;
}

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}

int efficientLCM(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << efficientLCM(a, b) << endl;
    return 0;
}