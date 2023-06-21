#include<stdio.h>
int main()
{

    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
        {
            int m=a-i;
                for (int j=m;j>0;j--)
                {
                    printf(" ");
                }
                for (int k = 0; k < i*2-1; k++)
                {
                    (i%2==0) ? printf("*") : printf("^");
                }
                for (int l = m; l > 0 ; l--)
                {
                    printf(" ");
                }
                printf("\n");
        }

    return 0;
}