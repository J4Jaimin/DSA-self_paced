#include <bits/stdc++.h>
using namespace std;

void countTwoOddOccurences(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int twoCount = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                twoCount++;
            }
        }

        if (twoCount % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }
}

void countTwoOddOccurencesArray(int arr[], int n)
{
    int number = 0;
    for (int i = 0; i < n; i++)
    {
        number ^= arr[i];
    }

    int k = number & (number - 1);

    int res1 = 0, res2 = 0;

    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & k) != 0)
            res1 ^= arr[i];
        else
            res2 ^= arr[i];
    }

    cout << res1 << " " << res2;
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

    countTwoOddOccurences(arr, n);
    return 0;
}