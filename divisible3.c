#include<stdio.h>
int main()
{
    int n;
    printf("ENter number:");
    scanf("%d",&n);
    
    if(n%5==0)
    printf("The %d is divisible by 5",n);
    else if(n%7==0)
    printf("The %d is divisible by 7",n);
    else
    printf("The %d is not divisible by 5 nor 7");
    return 0;
}