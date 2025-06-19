#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    
    if(n%5==0){
        if(n%7==0){
            printf("The %d is divisible by 5 and 7",n);
        }
    }
    else
    printf("The %d is not divisible by 5 and 7",n);

    return 0;
}