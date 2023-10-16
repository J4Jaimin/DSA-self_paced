#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    int odd_occurs = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        odd_occurs ^= arr[i];
    }

    cout << odd_occurs << endl;

    return 0;
}