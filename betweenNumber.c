#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    
    if((a>b&&a<c)||(a<b&&a>c))
    printf("The %d is between %d and %d",a,b,c);
    else
    printf("The %d is not between %d and %d",a,b,c);

    return 0;
}