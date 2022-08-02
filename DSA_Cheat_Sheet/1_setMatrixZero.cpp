#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void setMatrixZeros(vector<vector<int>> &matrix)
{
    int row, col;
    row = matrix.size();
    col = matrix[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // Traversing every element to find 0's
            if (matrix[i][j] == 0)
            {
                // Replacing that col to -1
                for (int a = 0; a < col; a++)
                {
                    if (matrix[i][a] != 0)
                        matrix[i][a] = -1;
                }

                // Replacing that row to -1
                for (int b = 0; b < row; b++)
                {
                    if (matrix[b][j] != 0)
                        matrix[b][j] = -1;
                }
            }
        }
    }

    // Replacing every row & col from -1 to 0
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == -1)
                matrix[i][j] = 0;
        }
    }
}

int main()
{
    cout << "This is the input matrix" << endl;
    vector<vector<int>> matrix{
        {1, 1, 1, 1},
        {1, 0, 1, 1},
        {1, 1, 0, 1},
        {1, 0, 0, 1}};

    // Printing 2d array
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    setMatrixZeros(matrix);
    cout << "This is the output matrix" << endl;

    // Printing 2d array
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}