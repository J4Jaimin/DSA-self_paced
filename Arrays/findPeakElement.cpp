#include <bits/stdc++.h>
using namespace std;

int findPeakElement(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (((i == 0) || (arr[i] > arr[i - 1])) && (((i == n - 1) || (arr[i] > arr[i + 1]))))
        {
            return arr[i];
        }
    }

    return -1;
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

    cout << findPeakElement(arr, n);
    return 0;
}