#include<stdio.h>
#include <string.h>
int main()
{

    int a,b,sum=0,mul=0;
    char ar[30];
    scanf("%s",ar);
    scanf("%d %d",&a,&b);

    for (int i=0; ar[i]!='\0'; i++)
    {
        if(ar[i]=='+')
        {
            sum += a+b;
        }
        else if (ar[i]=='*')
        {
            mul+=a*b;
        }
    }
    printf("%d",sum+mul);
    return 0;

}
