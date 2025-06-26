#include<stdio.h>
int main()
{
    int i,n,rem,cnt=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        printf("%d  ",rem);
        cnt++;
        n=n/10;
    }
    printf("\nCount=%d",cnt);
    return 0;
}