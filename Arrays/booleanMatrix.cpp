#include <bits/stdc++.h>
using namespace std;

void convert(vector<vector<int>> &mat, int x, int y)
{
    for (int i = 0; i < mat[0].size(); i++)
    {
        if (mat[x][i] != 1)
            mat[x][i] = -1;
    }

    for (int i = 0; i < mat.size(); i++)
    {
        if (mat[i][y] != 1)
            mat[i][y] = -1;
    }
}

// time complexity = O(M*N (M+N))

void booleanMatrix(vector<vector<int>> &matrix)
{
    // code here

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] == 1)
                convert(matrix, i, j);
        }
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = 1;
            }
        }
    }
}

// Efficient with O(M*N) time complexity

void booleanMatrixEfficient(vector<vector<int>> &matrix)
{

    bool isOneInFirstRow, isOneInFirstCol;

    isOneInFirstCol = isOneInFirstCol = false;

    for (int i = 0; i < matrix[0].size(); i++)
    {
        if (matrix[0][i])
        {
            isOneInFirstRow = true;
            break;
        }
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        if (matrix[i][0])
        {
            isOneInFirstCol = true;
            break;
        }
    }

    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix[0].size(); j++)
        {
            if (matrix[i][j])
            {
                matrix[0][j] = matrix[i][0] = 1;
            }
        }
    }

    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix[0].size(); j++)
        {
            if (matrix[0][j] or matrix[i][0])
            {
                matrix[i][j] = 1;
            }
        }
    }

    if (isOneInFirstRow)
    {
        for (int i = 0; i < matrix[0].size(); i++)
        {
            matrix[0][i] = 1;
        }
    }

    if (isOneInFirstCol)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            matrix[i][0] = 1;
        }
    }
}

int main()
{
    int row, col;
    cin >> row >> col;

    vector<vector<int>> matrix(row);

    for (int i = 0; i < row; i++)
    {
        matrix[i].assign(col, 0);
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    booleanMatrixEfficient(matrix);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }

        cout << "\n";
    }

    return 0;
}