#include<stdio.h>
int main()
{
    int i,sum=0,x,y;
    printf("Enter x and y:");
    scanf("%d%d",&x,&y);
    for(i=x;i<=y;i++)
    {
        if(i%2==0)
        sum+=i;
    }
    printf("\nSum=%d",sum);
    return 0;
    

}