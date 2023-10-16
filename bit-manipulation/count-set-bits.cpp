#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    int countBits = 0;

    while (n != 0)
    {
        if (n & 1)
            countBits++;

        n /= 2;
    }

    return countBits;
}

int countSetBitsEfficientAlgo(int n)
{
    int countBits = 0;

    while (n > 0)
    {
        n = n & (n - 1);

        countBits++;
    }

    return countBits;
}

int countSetBitsMoreEfficientAlgo(int n)
{
    int countBits = 0;
    vector<int> preComputedCounts(256, 0);

    for (int i = 1; i < 256; i++)
    {
        int temp = i;
        while (temp > 0)
        {
            temp = temp & (temp - 1);
            preComputedCounts[i]++;
        }
    }

    while (n > 0)
    {
        countBits += preComputedCounts[n & 255];
        n >>= 8;
    }

    return countBits;
}

int main()
{
    int n;
    cin >> n;

    cout << countSetBitsMoreEfficientAlgo(n) << endl;
    return 0;
}