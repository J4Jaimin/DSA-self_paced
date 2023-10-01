#include <bits/stdc++.h>
using namespace std;

vector<int> primeDivision(int n)
{
    // code here

    vector<int> isPrime(n + 1, true);
    vector<int> ans;

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    int small = 2, large = n - 2;

    while (small <= large)
    {
        if (isPrime[small] and isPrime[large])
        {
            if (small + large > n)
                large--;
            else if (small + large < n)
                small++;
            else if (small + large == n)
            {
                ans.push_back(small);
                ans.push_back(large);
                break;
            }
        }
        if (!isPrime[small])
            small++;
        if (!isPrime[large])
            large--;
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> ans = primeDivision(n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}