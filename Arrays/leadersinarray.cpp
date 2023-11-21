#include <bits/stdc++.h>
using namespace std;

vector<int> findLeadersInArray(int arr[], int n)
{
    vector<int> leaders;

    for (int i = 0; i < n - 1; i++)
    {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] >= arr[i])
                isLeader = false;
        }

        if (isLeader)
            leaders.push_back(arr[i]);
    }

    leaders.push_back(arr[n - 1]);

    return leaders;
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

    vector<int> leaders = findLeadersInArray(arr, n);

    for (int i = 0; i < leaders.size(); i++)
    {
        cout << leaders[i] << " ";
    }
    return 0;
}