#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int temp[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // temp[0] = arr[0];

    int res = 1;

    for (int i = 1; i < n; i++)
    {
        // if (temp[res - 1] != arr[i])
        // {
        //     temp[res] = arr[i];
        //     res++;
        // }

        if (arr[i] != arr[res - 1])
        {
            arr[res] = arr[i];
            res++;
        }
    }

    // for (int i = 0; i < res; i++)
    // {
    //     arr[i] = temp[i];
    // }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}