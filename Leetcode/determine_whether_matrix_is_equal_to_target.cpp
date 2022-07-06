
#include <bits/stdc++.h>
using namespace std;

void swapp(vector<vector<int>> &n, int i, int j)
{
    n[i][j] = n[i][j] ^ n[j][i];

    n[j][i] = n[i][j] ^ n[j][i];

    n[i][j] = n[i][j] ^ n[j][i];
}

// rotating the matrix by 90 degree.
vector<vector<int>> rotate(vector<vector<int>> &mat)
{
    int length = mat.size();
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            swapp(mat, i, j);
        }
    }
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length / 2; j++)
        {
            swap(mat[i][j], mat[i][length - j - 1]);
        }
    }

    return mat;
}

bool findRotation(vector<vector<int>> &mat, vector<vector<int>> &target)
{
    // Maximum 4 times the matrix can be rotated before getting original matrix
    int l = 4;
    while (l--)
    {
        if (rotate(mat) == target)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> mat = {{0, 1}, {1, 0}};
    vector<vector<int>> target = {{1, 0}, {0, 1}};

    cout << boolalpha;
    cout << findRotation(mat, target);
}