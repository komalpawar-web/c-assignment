#include<stdio.h>
int main()
{
    int x,y,i;
    printf("Enter x and y:");
    scanf("%d%d",&x,&y);
    for(i=x;i<=y;i++)
    {
        if(i%2==0)
        printf("\n%d",i);
    }
    return 0;
}