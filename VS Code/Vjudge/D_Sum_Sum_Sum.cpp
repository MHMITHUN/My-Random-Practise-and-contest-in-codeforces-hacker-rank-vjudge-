#include <stdio.h>

int main()
{
    int a, b, count = 0;
    int x[2000];

    scanf("%d", &a);

    for (b = 0; b < a; b++)
    {
        scanf("%d", &x[b]);

        if (x[b] % 2 == 0 || x[b] % 3 == 0 || x[b] % 5 == 0)
        {
            count += x[b];
        }
    }

    printf("%d", (count == 0) ? 0 : count);

    return 0;
}
