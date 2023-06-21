#include <stdio.h>

int main()
{
    int n;
    int h[101];
    int ans;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &h[i]);
    }
    ans = 1;
    for (int i = 2; i <= n; i++)
    {
        if (h[ans] < h[i])
        {
            ans = i;
        }
    }
    printf("%d\n", ans);
    return 0;
}
