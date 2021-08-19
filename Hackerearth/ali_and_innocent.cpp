#include <iostream>
#include <string>
using namespace std;
bool check(char h)
{
    if (h == 'A' || h == 'E' || h == 'O' || h == 'I' || h == 'U' || h == 'Y')
    {
        return true;
    }
    return false;
}
int s(string f)
{
    int count = 0;
    for (int i = 0; i < f.size() - 1; i++)
    {
        if (i == 2 || i == 6 || i == 1 || i == 5)
        {
            continue;
        }
        if ((f[i] + f[i + 1]) % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int h;
    string n;
    cin >> n;
    h = n.size();
    if ((check(n[2]) == false) && (s(n) == 4))
    {

        cout << "valid" << endl;
    }
    else
    {
        cout << "invalid" << endl;
    }
    return 0;
}