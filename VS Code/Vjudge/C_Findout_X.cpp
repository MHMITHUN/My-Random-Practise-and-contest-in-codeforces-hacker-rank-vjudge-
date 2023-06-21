#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char x[100];
    scanf("%s", x);
    int len = strlen(x);

    for (int i = 0; i < len; i++) {
        if (isupper(x[i])) {
            printf("%d", i+1);
            return 0;
        }
    }

    return 0;
}
