#include <stdio.h>

int main() {
    int a, b, cnt = 0;
    int x[2000];

    scanf("%d", &a);

    for (b = 0; b < a; b++) {
        scanf("%d", &x[b]);
        if (x[b] % 2 == 0) {
            cnt += x[b];
        }
    }

    printf("%d", (cnt == 0) ? 0 : cnt);

    return 0;
}
