#include<stdio.h>
int main()
{
    int a,b;
    char wr;
    scanf("%d %c %d",&a,&wr,&b);

    switch (wr)
    {
    case '>' :
    (a>b) ? printf("Right") : printf("Wrong");
    break;
    
    case '<' :
    (a<b) ? printf("Right") : printf("Wrong");
    break;

    case '=' :
    (a==b) ? printf("Right") : printf("Wrong");
    break;

    //default:
        //break;
    }

    return 0;
}