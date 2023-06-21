#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    (a%3==0) ? printf("%d",a/3) : printf("-1");
    
    return 0;
}