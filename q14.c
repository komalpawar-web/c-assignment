#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter x and y:");
    scanf("%d%d",&x,&y);
    for(x=2;x<=y;x++)
    {
        if(x%2==0)
        printf("\n%d",x);
    }
    return 0;
}