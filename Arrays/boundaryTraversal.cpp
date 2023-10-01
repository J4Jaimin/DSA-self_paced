#include <bits/stdc++.h>
using namespace std;

vector<int> boundaryTraversal(vector<vector<int>> matrix, int n, int m)
{
    // code here
    vector<int> ans;

    for (int i = 0; i < m; i++)
    {
        ans.push_back(matrix[0][i]);
    }

    for (int i = 1; i < n; i++)
    {
        ans.push_back(matrix[i][m - 1]);
    }

    if (n != 1)
    {
        for (int i = m - 2; i >= 0; i--)
        {
            ans.push_back(matrix[n - 1][i]);
        }
    }

    if (m != 1)
    {
        for (int i = n - 2; i >= 1; i--)
        {
            ans.push_back(matrix[i][0]);
        }
    }

    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n);

    for (int i = 0; i < n; i++)
    {
        matrix[i].assign(m, 0);
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    vector<int> ans = boundaryTraversal(matrix, n, m);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}