#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(i%2==0)
        sum+=i;
    }
    printf("\nSum=%d",sum);
    return 0;
    

}