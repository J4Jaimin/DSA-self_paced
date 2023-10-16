#include <bits/stdc++.h>
using namespace std;

int checkBit(int pattern, int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if ((pattern & arr[i]) == pattern)
            count++;
    }

    return count;
}

int maxAnd(int arr[], int n)
{
    int res = 0;
    int count = 0;

    for (int i = 31; i >= 0; i--)
    {
        count = checkBit(res | (1 << i), arr, n);

        if (count >= 2)
            res = res | (1 << i);
    }

    return res;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << maxAnd(arr, n) << endl;

    return 0;
}