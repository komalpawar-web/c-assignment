#include<stdio.h>
int main()
{
    int i,x,y,sum=0;
    printf("Enter first and last number:");
    scanf("%d%d",&x,&y);

    for(i=x;i<=y;i++)
    sum+=i;
    printf("\nSum=%d",sum);
    return 0;
}