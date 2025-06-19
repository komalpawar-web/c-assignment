#include<stdio.h>
int main()
{
    int days,fine;
    printf("Enter the number of days:");
    scanf("%d",&days);

    if(days<5)
    fine=20;
    else if(days>=6&&days<=10)
    fine=30;
    else if(days>10)
    fine=40;

    printf("The %d Rs fine on %d days.",fine,days);

    return 0;

}