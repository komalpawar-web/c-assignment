#include<stdio.h>
int main()
{
    int n;
    printf("Enter number to check:");
    scanf("%d",&n);
    if(n>0)
        printf("positive number");
    else
        printf("number is not positive");    

    return 0;
}