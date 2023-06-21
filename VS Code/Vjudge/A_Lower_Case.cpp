#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char x[105];
    scanf("%s", x);
    for (int i = 0; i < strlen(x); i++)
    {
        x[i] = toupper(x[i]);
    }
    printf("%s", x);
    return 0;
}
