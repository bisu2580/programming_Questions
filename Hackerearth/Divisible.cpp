#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll rev(ll num)
{
    ll r = 0;
    while (num > 0)
    {
        ll rem = num % 10;
        r = r * 10 + rem;
        num /= 10;
    }
    return r % 10;
}
int main()
{
    ll num, sum1 = 0, sum2 = 0;
    cin >> num;
    ll arr[num];
    ll left[num / 2];
    ll right[num / 2];
    for (ll i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < num / 2; i++)
    {
        left[i] = arr[i];
    }
    ll h = 0;
    for (ll i = num / 2; i < num; i++)
    {
        right[h] = arr[i];
        h++;
    }
    for (ll i = 0; i < num / 2; i++)
    {
        left[i] = rev(left[i]);
    }
    for (ll i = 0; i < num / 2; i++)
    {
        right[i] = right[i] % 10;
    }
    ll fina[num];
    for (ll i = 0; i < num / 2; i++)
    {
        fina[i] = left[i];
    }
    h = num / 2;
    for (ll i = 0; i < num / 2; i++)
    {
        fina[h] = right[i];
        h++;
    }
    for (ll k = 0; k < num; k++)
    {
        if (k % 2 != 0)
        {
            sum1 += fina[k];
        }
        else
        {
            sum2 += fina[k];
        }
    }

    if ((max(sum1, sum2) - min(sum1, sum2)) % 11 == 0)
    {
        cout << "OUI";
    }
    else
    {
        cout << "NON";
    }
}