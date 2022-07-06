
#include <bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> &matrix)
{

    vector<int> ans;

    // number of rows and columns
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total_elements = row * col;

    // Respective indexes
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total_elements)
    {
        // we are changing count so that there are no duplicates.

        // printing first row and incrementing it
        for (int num = startingCol; count < total_elements && num <= endingCol; num++)
        {
            ans.push_back(matrix[startingRow][num]);
            count++;
        }

        startingRow++;

        // printing last column and decrementing it
        for (int num = startingRow; count < total_elements && num <= endingRow; num++)
        {
            ans.push_back(matrix[num][endingCol]);
            count++;
        }

        endingCol--;

        // printing last row and decrementing it
        for (int num = endingCol; count < total_elements && num >= startingCol; num--)
        {
            ans.push_back(matrix[endingRow][num]);
            count++;
        }

        endingRow--;

        // printing first column and decrementing it
        for (int num = endingRow; count < total_elements && num >= startingRow; num--)
        {
            ans.push_back(matrix[num][startingCol]);
            count++;
        }

        startingCol++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> num = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> answer = spiralOrder(num);

    cout << "The spiral order:\n";
    for (auto i : answer)
    {
        cout << i << " ";
    }
}