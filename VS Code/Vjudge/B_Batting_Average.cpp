#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    double S = (double)B / A;
    printf("%.3lf\n", S);
    return 0;
}
