#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i < a; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x < b && y > c)
        {
            puts("Yes");
            return 0;
        }
    }
    puts("No");
}