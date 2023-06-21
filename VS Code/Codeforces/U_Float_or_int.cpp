#include <stdio.h>
int main()
{
    float n;
    scanf("%f", &n);

    int iv = (int)n;
    float fv = n - iv;

    (fv == 0) ?  printf("int %d",iv) : printf("float %d %.3f",iv,fv);
    return 0;
}