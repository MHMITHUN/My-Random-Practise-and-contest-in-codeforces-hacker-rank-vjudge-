#include <stdio.h>

int main() {
    int a, A = 0, D = 0;
    scanf("%d", &a);

    char x[a];
    scanf("%s", x);

    for (int i = 0; i < a; i++) {
        if (x[i] == 'A') {
            A++;
        } else {
            D++;
        }
    }

    printf("%s", (A > D) ? "Anton" : (A == D) ? "Friendship" : "Danik");

    return 0;
}
