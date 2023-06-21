#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {

        ll n;
        cin >> n;

        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        int cnt = 0;
        for (int i = 0; i < n / 2; i++)
        {
            cnt = cnt + abs(a[i] - a[n - i - 1]);
        }
        cout << cnt << endl;
    }
    return 0;
}