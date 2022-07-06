/* Rotating the matrix by 90 degree clockwise can be achieved by first transposing the matrix and then reversing each row element of the matrix.*/

#include <bits/stdc++.h>
using namespace std;
// swap two elements using bit manipulation
void swapping(vector<vector<int>> &matrix, int i, int j)
{

    matrix[i][j] = matrix[i][j] ^ (matrix[j][i]);

    matrix[j][i] = matrix[i][j] ^ (matrix[j][i]);

    matrix[i][j] = matrix[i][j] ^ (matrix[j][i]);
}

// rotating the matrix by 90 degree
void rotate(vector<vector<int>> &matrix)
{

    int row = matrix.size();
    int col = matrix[0].size();

    // transpose process
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swapping(matrix, i, j);
        }
    }

    // reversing the matrix elements of each row
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col / 2; j++)
        {
            swap(matrix[i][j], matrix[i][col - j - 1]);
        }
    }
}
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(matrix);
    // printing the elements of the matrix
    for (auto i : matrix)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}