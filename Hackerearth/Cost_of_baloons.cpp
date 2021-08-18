#include <iostream>
using namespace std;
int main()
{
    int sum, count = 1;
    int test, g, j, gt, jt;
    int parti;
    int green;
    int purple;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        cin >> green;
        cin >> purple;
        cin >> parti;
        if (count % 2 != 0)
        {
            sum = 0;
            for (int h = 0; h < parti; h++)
            {
                cin >> g >> j;
                sum += (g * green + j * purple);
            }
        }
        if (count % 2 == 0)
        {
            sum = 0;
            for (int h = 0; h < parti; h++)
            {
                cin >> g >> j;
                sum += (g * purple + j * green);
            }
        }
        count++;
        cout << sum << endl;
    }
    return 0;
}