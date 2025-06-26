#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=2;i<=10;i++)
    {
        if(i%2==0)
        sum+=i;
    }
    printf("\nSum=%d",sum);
    return 0;
    

}