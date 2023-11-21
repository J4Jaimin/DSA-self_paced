#include <bits/stdc++.h>
using namespace std;

int maximumDifference(int arr[], int n)
{

    int maxdiff = INT_MIN;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            maxdiff = max(maxdiff, arr[j] - arr[i]);
        }
    }

    return maxdiff;
}

int maxDiffEfficientSol(int arr[], int n)
{

    int minVal = INT_MAX;
    int res = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        res = max(res, arr[i] - minVal);
        minVal = min(minVal, arr[i]);
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

    cout << maxDiffEfficientSol(arr, n);
    return 0;
}