#include<stdio.h>
int main()
{
    int x,y,i;
    printf("Enter first number:");
    scanf("%d",&x);
    printf("\nEnter last number:");
    scanf("%d",&y);

    for(i=x;i<=y;i++)
    printf("\n%d",i);

    return 0;
}