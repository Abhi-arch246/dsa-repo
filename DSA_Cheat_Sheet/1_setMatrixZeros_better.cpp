#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void setMatrixZeros_better(vector<vector<int>> &matrix)
{
    int col, row;
    row = matrix.size();
    col = matrix[0].size();
    // Array for row matrix
    vector<int> rowarray(row, -1);
    // Array for col matrix
    vector<int> colarray(col, -1);

    // Traversing through elements where 0 is found inserting 0 to row and col array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == 0)
            {
                rowarray[i] = 0;
                colarray[j] = 0;
            }
        }
    }

    // Traversing through row and col array where 0 is found will replace 0 in the original matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (rowarray[i] == 0 || colarray[j] == 0)
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

    setMatrixZeros_better(matrix);
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