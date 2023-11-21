#include <bits/stdc++.h>
using namespace std;

void printFrequency(int arr[], int n)
{

    int freq = 1;
    int i = 1;

    for (int i = 1; i < n; i++)
    {

        if (arr[i] == arr[i - 1])
        {
            freq++;
        }

        else
        {
            cout << arr[i - 1] << "  " << freq << endl;
            freq = 1;
        }
    }

    cout << arr[n - 1] << "  " << freq << endl;
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

    printFrequency(arr, n);

    return 0;
}

// for example we have an array like this
// 10 20 20 30 30 30 40
