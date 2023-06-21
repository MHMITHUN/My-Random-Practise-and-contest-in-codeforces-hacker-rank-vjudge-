#include<stdio.h>
#include<algorithm>
#include<iterator>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int arr[3]={a,b,c};
    std::sort(std::begin(arr),std::end(arr));

    printf("%d\n%d\n%d\n\n",arr[0],arr[1],arr[2]);

    printf("%d\n%d\n%d\n",a,b,c);
    
    return 0;
}