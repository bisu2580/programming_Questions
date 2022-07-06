#include <bits/stdc++.h>
using namespace std;
void print(int num[][3], int row, int col)
{
    int j;
    for (j = 0; j < col; j++)
    {
        if (j & 1)
        {
            for (int k = row - 1; k >= 0; k--)
            {
                cout << num[k][j] << " ";
            }
                }
        else
        {
            for (int k = 0; k < row; k++)
            {
                cout << num[k][j] << " ";
            }
        }
    }
}
int main()
{
    int num[3][3] = {{1, 2, 3},
                     {6, 2, 5},
                     {8, 1, 4}};
    print(num, 3, 3);
}