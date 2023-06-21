#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a; i++)
    {
        int x;
        scanf("%d", &x);

        if (x == b)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
