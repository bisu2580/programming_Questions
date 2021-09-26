#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, maximum, minimum;
    int k;
    cout << "Enter the size ";
    cin >> num;
    vector<int> v(num);
    for (int i = 0; i < num; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << "Enter k\n";
    cin >> k;
    maximum = v[v.size() - k];
    minimum = v[k - 1];
    cout << k << " maximum number is " << maximum << endl;
    cout << k << " minimum number is " << minimum;

    return 0;
}