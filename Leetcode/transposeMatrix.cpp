#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>> &matrix)
{

    int row = matrix.size();
    int col = matrix[0].size();

    // using extra space to interchange the row and column
    vector<vector<int>> res(col, vector<int>(row));

    // transpose algorithm
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            res[i][j] = matrix[j][i];
        }
    }
    return res;
}
int main()
{
    vector<vector<int>> num = {{1, 2, 3}, {4, 5, 6}};

    num = transpose(num);

    for (int i = 0; i < num.size(); i++)
    {
        for (int j = 0; j < num[0].size(); j++)
        {
            cout << num[i][j] << " ";
        }
        cout << endl;
    }
}